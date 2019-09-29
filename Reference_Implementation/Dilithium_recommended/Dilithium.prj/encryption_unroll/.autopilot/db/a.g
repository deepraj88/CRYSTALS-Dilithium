#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/kb150/CRYSTALS-Dilithium/Reference_Implementation/Dilithium_recommended/Dilithium.prj/encryption_unroll/.autopilot/db/a.g.bc ${1+"$@"}
