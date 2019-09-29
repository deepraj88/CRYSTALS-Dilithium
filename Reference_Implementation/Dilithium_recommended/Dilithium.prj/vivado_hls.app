<project xmlns="com.autoesl.autopilot.project" name="Dilithium.prj" top="crypto_sign">
    <files>
        <file name="../../aes.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"/>
        <file name="../../aes.h" sc="0" tb="1" cflags=" -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"/>
        <file name="../../newtest_sign.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"/>
        <file name="api.h" sc="0" tb="false" cflags=""/>
        <file name="fips202.c" sc="0" tb="false" cflags=""/>
        <file name="fips202.h" sc="0" tb="false" cflags=""/>
        <file name="ntt.c" sc="0" tb="false" cflags=""/>
        <file name="ntt.h" sc="0" tb="false" cflags=""/>
        <file name="packing.c" sc="0" tb="false" cflags=""/>
        <file name="packing.h" sc="0" tb="false" cflags=""/>
        <file name="params.h" sc="0" tb="false" cflags=""/>
        <file name="poly.c" sc="0" tb="false" cflags=""/>
        <file name="poly.h" sc="0" tb="false" cflags=""/>
        <file name="polyvec.c" sc="0" tb="false" cflags=""/>
        <file name="polyvec.h" sc="0" tb="false" cflags=""/>
        <file name="reduce.c" sc="0" tb="false" cflags=""/>
        <file name="reduce.h" sc="0" tb="false" cflags=""/>
        <file name="rng.c" sc="0" tb="false" cflags=""/>
        <file name="rng.h" sc="0" tb="false" cflags=""/>
        <file name="rounding.c" sc="0" tb="false" cflags=""/>
        <file name="rounding.h" sc="0" tb="false" cflags=""/>
        <file name="sign.c" sc="0" tb="false" cflags=""/>
        <file name="sign.h" sc="0" tb="false" cflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
        <solution name="decryption" status="inactive"/>
        <solution name="encryption_unroll" status="inactive"/>
    </solutions>
</project>

