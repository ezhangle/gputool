/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "gmc_8_2.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "gmc_gmc_8_2",
    .regs = gmc_gmc_8_2_regs,
    .size = ARRAY_SIZE(gmc_gmc_8_2_regs)
};

void load_gmc_gmc_8_2() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb
