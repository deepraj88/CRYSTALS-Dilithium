#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/vivado_hls/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/Dilithium.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
