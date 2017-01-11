/* AUTOGENERATED FILE, DO NOT EDIT MANUALLY */
#include <amdregdb/AmdRegDb.h>
#include <util/util.h>
#include "vce_2_0.h"

namespace amdregdb {

static const RegBlock regBlock = {
    .name = "vce_vce_2_0",
    .regs = vce_vce_2_0_regs,
    .size = ARRAY_SIZE(vce_vce_2_0_regs)
};

void load_vce_vce_2_0() {
    static bool hasLoaded = false;
    if (hasLoaded) {
        return;
    }
    gRegDb.push_back(&regBlock);
    hasLoaded = true;
}

}; //namespace amdregdb