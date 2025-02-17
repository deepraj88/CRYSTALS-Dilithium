# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
create_project -in_memory -part xc7a100tcsg324-2

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_property webtalk.parent_dir /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/project.cache/wt [current_project]
set_property parent.project_path /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/project.xpr [current_project]
set_property XPM_LIBRARIES XPM_MEMORY [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog -library xil_defaultlib {
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/KeccakF1600_StatePer.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/KeccakF1600_Statebkb.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/challenge.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/challenge_inbuf.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_c_coejbC.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_h_vecudo.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_mat_vlbW.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_s1_vemb6.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_s2_veqcK.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_seedbuf.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_t0_vercU.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_w_vecsc4.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_y_vecncg.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_yhat_ocq.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign_z_vecpcA.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/expand_mat.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/expand_mat_inbuf.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/expand_mat_outbuf.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/invntt_frominvmonhbi.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/invntt_frominvmont.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/invntt_frominvmont_1.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/ntt.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/ntt_1.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/ntt_1_zetas.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/ntt_2.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/pack_sig.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/poly_uniform_gamma1m.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/poly_uniform_gammdEe.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/poly_uniform_gammeOg.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/polyveck_chknorm.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/polyveck_decompose.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/polyveck_freeze.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/polyveck_make_hint.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/polyvecl_pointwise_a.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/polyvecl_pointwisg8j.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/rej_gamma1m1.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake128.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake128_squeezebloc.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake128_t.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake256.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake256_s.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake256_t.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/shake256_t_1.v
  /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/unpack_sk.v
}
# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign.xdc
set_property used_in_implementation false [get_files /home/dss545/vivado_hls/CRYSTALS-Dilithium/Optimized_Implementation/Dilithium_weak/dilithium_weak.prj/sign/impl/verilog/crypto_sign.xdc]

set_param ips.enableIPCacheLiteLoad 0
close [open __synthesis_is_running__ w]

synth_design -top crypto_sign -part xc7a100tcsg324-2 -directive sdx_optimization_effort_high -no_iobuf -mode out_of_context


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef crypto_sign.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file crypto_sign_utilization_synth.rpt -pb crypto_sign_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
