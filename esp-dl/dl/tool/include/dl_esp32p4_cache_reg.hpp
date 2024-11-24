#include "soc/cache_reg.h"

/* i 0-core0, 1-core1*/
#define L1_ICACHE_ACS_HIT_CNT_REG_n(i) (CACHE_L1_IBUS0_ACS_HIT_CNT_REG + 0x10 * i)
#define L1_ICACHE_ACS_MISS_CNT_REG_n(i) (CACHE_L1_IBUS0_ACS_MISS_CNT_REG + 0x10 * i)
#define L1_ICACHE_ACS_CONFLICT_CNT_REG_n(i) (CACHE_L1_IBUS0_ACS_CONFLICT_CNT_REG + 0x10 * i)
#define L1_ICACHE_ACS_NXTLVL_CNT_REG_n(i) (CACHE_L1_IBUS0_ACS_NXTLVL_RD_CNT_REG + 0x10 * i)

#define L1_DCACHE_ACS_HIT_CNT_REG_n(i) (CACHE_L1_DBUS0_ACS_HIT_CNT_REG + 0x14 * i)
#define L1_DCACHE_ACS_MISS_CNT_REG_n(i) (CACHE_L1_DBUS0_ACS_MISS_CNT_REG + 0x14 * i)
#define L1_DCACHE_ACS_CONFLICT_CNT_REG_n(i) (CACHE_L1_DBUS0_ACS_CONFLICT_CNT_REG + 0x14 * i)
#define L1_DCACHE_ACS_NXTLVL_CNT_REG_n(i) (CACHE_L1_DBUS0_ACS_NXTLVL_RD_CNT_REG + 0x14 * i)
#define L1_DCACHE_ACS_NXTLVL_WR_CNT_REG_n(i) (CACHE_L1_DBUS0_ACS_NXTLVL_WR_CNT_REG + 0x14 * i)

#define L2_ICACHE_ACS_HIT_CNT_REG_n(i) (CACHE_L2_IBUS0_ACS_HIT_CNT_REG + 0x10 * i)
#define L2_ICACHE_ACS_MISS_CNT_REG_n(i) (CACHE_L2_IBUS0_ACS_MISS_CNT_REG + 0x10 * i)
#define L2_ICACHE_ACS_CONFLICT_CNT_REG_n(i) (CACHE_L2_IBUS0_ACS_CONFLICT_CNT_REG + 0x10 * i)
#define L2_ICACHE_ACS_NXTLVL_CNT_REG_n(i) (CACHE_L2_IBUS0_ACS_NXTLVL_RD_CNT_REG + 0x10 * i)

#define L2_DCACHE_ACS_HIT_CNT_REG_n(i) (CACHE_L2_DBUS0_ACS_HIT_CNT_REG + 0x14 * i)
#define L2_DCACHE_ACS_MISS_CNT_REG_n(i) (CACHE_L2_DBUS0_ACS_MISS_CNT_REG + 0x14 * i)
#define L2_DCACHE_ACS_CONFLICT_CNT_REG_n(i) (CACHE_L2_DBUS0_ACS_CONFLICT_CNT_REG + 0x14 * i)
#define L2_DCACHE_ACS_NXTLVL_CNT_REG_n(i) (CACHE_L2_DBUS0_ACS_NXTLVL_RD_CNT_REG + 0x14 * i)
#define L2_DCACHE_ACS_NXTLVL_WR_CNT_REG_n(i) (CACHE_L2_DBUS0_ACS_NXTLVL_WR_CNT_REG + 0x14 * i)
