<project xmlns="com.autoesl.autopilot.project" name="dilithium_rec.prj" top="crypto_sign_keypair">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <files xmlns="">
        <file name="../../newtest_sign.c" sc="0" tb="1" cflags=" -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"/>
        <file name="sign.c" sc="0" tb="false" cflags=""/>
        <file name="rounding.c" sc="0" tb="false" cflags=""/>
        <file name="rng.c" sc="0" tb="false" cflags=""/>
        <file name="reduce.c" sc="0" tb="false" cflags=""/>
        <file name="polyvec.c" sc="0" tb="false" cflags=""/>
        <file name="poly.c" sc="0" tb="false" cflags=""/>
        <file name="packing.c" sc="0" tb="false" cflags=""/>
        <file name="ntt.c" sc="0" tb="false" cflags=""/>
        <file name="fips202.c" sc="0" tb="false" cflags=""/>
        <file name="aes.c" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="sign_open" status="inactive"/>
        <solution name="sign" status="inactive"/>
        <solution name="keypair" status="active"/>
    </solutions>
</project>

