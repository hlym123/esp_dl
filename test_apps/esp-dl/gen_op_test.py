import argparse
import os

PYTEST_TEMPLATE = """
import pytest
from pytest_embedded import Dut


@pytest.mark.target("{target}")
@pytest.mark.env("{env}")
@pytest.mark.parametrize(
    "config",
    {models},
)
def test_model_common(dut: Dut) -> None:
    dut.run_all_single_board_cases(group="dl_model")
"""


def get_model_names(model_path):
    if not model_path or not os.path.exists(model_path):
        return []
    models = [entry for entry in os.scandir(model_path) if entry.is_dir()]
    if len(models) == 0:
        return []

    names = []
    for mode in models:
        names.append(os.path.basename(mode))

    return names


def gen_pytest_script(model_path, pytest_file, target="esp32p4", env="esp32p4"):
    # models = get_model_names(model_path)
    target_model_path = os.path.join(model_path, target)
    models = get_model_names(target_model_path)
    if len(models) > 0:
        print(models)
        pytest_content = PYTEST_TEMPLATE.format(
            target=target, env=env, models=str(models)
        )
        print(pytest_content)
        with open(pytest_file, "w") as f:
            f.write(pytest_content)
    else:
        print(f"No model found in {model_path}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Generate script for operator test",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter,
    )
    parser.add_argument("model_path", help="Paths of models to test.")
    parser.add_argument(
        "--pytest_file",
        default="pytest_op_test.py",
        help="Path of pytest file to generate",
    )
    parser.add_argument(
        "-t",
        "--target",
        default="all",
        help='Build apps for given target. could pass "all" to get apps for all targets',
    )
    parser.add_argument(
        "--env",
        default="esp32p4",
        type=str,
        help="Envirenment to build apps.",
    )
    args = parser.parse_args()

    gen_pytest_script(args.model_path, args.pytest_file, args.target, args.env)