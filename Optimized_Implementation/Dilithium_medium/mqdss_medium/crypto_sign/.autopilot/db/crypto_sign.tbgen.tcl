set C_TypeInfoList {{ 
"crypto_sign" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"sm": [[], {"array": [ {"scalar": "unsigned char"}, [5444]]}] }, {"smlen": [[], {"array": [ {"scalar": "long long unsigned int"}, [1]]}] }, {"m": [[], {"array": [ {"scalar": "unsigned char"}, [3400]]}] }, {"mlen": [[], {"scalar": "long long unsigned int"}] }, {"sk": [[], {"array": [ {"scalar": "unsigned char"}, [2800]]}] }],[],""]
}}
set moduleName crypto_sign
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {crypto_sign}
set C_modelType { int 32 }
set C_modelArgList {
	{ sm int 8 regular {array 5444 { 2 3 } 1 1 }  }
	{ smlen int 64 regular {array 1 { 0 3 } 0 1 }  }
	{ m int 8 regular {array 3400 { 1 3 } 1 1 }  }
	{ mlen int 64 regular  }
	{ sk int 8 regular {array 2800 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sm", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sm","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 5443,"step" : 1}]}]}]} , 
 	{ "Name" : "smlen", "interface" : "memory", "bitwidth" : 64, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "smlen","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "m", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "m","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 3399,"step" : 1}]}]}]} , 
 	{ "Name" : "mlen", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "mlen","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 2799,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 26
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sm_address0 sc_out sc_lv 13 signal 0 } 
	{ sm_ce0 sc_out sc_logic 1 signal 0 } 
	{ sm_we0 sc_out sc_logic 1 signal 0 } 
	{ sm_d0 sc_out sc_lv 8 signal 0 } 
	{ sm_q0 sc_in sc_lv 8 signal 0 } 
	{ smlen_address0 sc_out sc_lv 1 signal 1 } 
	{ smlen_ce0 sc_out sc_logic 1 signal 1 } 
	{ smlen_we0 sc_out sc_logic 1 signal 1 } 
	{ smlen_d0 sc_out sc_lv 64 signal 1 } 
	{ m_address0 sc_out sc_lv 12 signal 2 } 
	{ m_ce0 sc_out sc_logic 1 signal 2 } 
	{ m_q0 sc_in sc_lv 8 signal 2 } 
	{ mlen sc_in sc_lv 64 signal 3 } 
	{ sk_address0 sc_out sc_lv 12 signal 4 } 
	{ sk_ce0 sc_out sc_logic 1 signal 4 } 
	{ sk_q0 sc_in sc_lv 8 signal 4 } 
	{ sk_address1 sc_out sc_lv 12 signal 4 } 
	{ sk_ce1 sc_out sc_logic 1 signal 4 } 
	{ sk_q1 sc_in sc_lv 8 signal 4 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sm_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "sm", "role": "address0" }} , 
 	{ "name": "sm_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sm", "role": "ce0" }} , 
 	{ "name": "sm_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sm", "role": "we0" }} , 
 	{ "name": "sm_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sm", "role": "d0" }} , 
 	{ "name": "sm_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sm", "role": "q0" }} , 
 	{ "name": "smlen_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "smlen", "role": "address0" }} , 
 	{ "name": "smlen_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "smlen", "role": "ce0" }} , 
 	{ "name": "smlen_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "smlen", "role": "we0" }} , 
 	{ "name": "smlen_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "smlen", "role": "d0" }} , 
 	{ "name": "m_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "m", "role": "address0" }} , 
 	{ "name": "m_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "m", "role": "ce0" }} , 
 	{ "name": "m_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "m", "role": "q0" }} , 
 	{ "name": "mlen", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "mlen", "role": "default" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "34", "38", "47", "50", "53", "54", "55", "57", "59", "61", "63", "65", "67", "68", "69", "71", "72", "73"],
		"CDFG" : "crypto_sign",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state47", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_challenge_fu_1106"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_absorb_fu_1115"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_expand_mat_fu_1125"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_squeezeblocks_1_fu_1133"},
			{"State" : "ap_ST_fsm_state28", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_squeezeblocks_1_fu_1133"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_squeezeblocks_2_fu_1144"},
			{"State" : "ap_ST_fsm_state115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pack_sig_fu_1152"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_unpack_sk_fu_1161"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_invntt_frominvmont_1_fu_1177"},
			{"State" : "ap_ST_fsm_state79", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_invntt_frominvmont_1_fu_1177"},
			{"State" : "ap_ST_fsm_state101", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_invntt_frominvmont_1_fu_1177"},
			{"State" : "ap_ST_fsm_state59", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_invntt_frominvmont_fu_1188"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyvecl_pointwise_a_fu_1197"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ntt_fu_1206"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ntt_fu_1206"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ntt_1_fu_1216"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ntt_1_fu_1216"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ntt_2_fu_1226"},
			{"State" : "ap_ST_fsm_state113", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_make_hint_fu_1233"},
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rej_gamma1m1_fu_1240"},
			{"State" : "ap_ST_fsm_state30", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rej_gamma1m1_fu_1240"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_absorb_1_fu_1255"},
			{"State" : "ap_ST_fsm_state45", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_decompose_fu_1261"},
			{"State" : "ap_ST_fsm_state86", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_decompose_fu_1261"},
			{"State" : "ap_ST_fsm_state90", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_chknorm_fu_1268"},
			{"State" : "ap_ST_fsm_state104", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_chknorm_fu_1268"},
			{"State" : "ap_ST_fsm_state43", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_freeze_fu_1273"},
			{"State" : "ap_ST_fsm_state84", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_freeze_fu_1273"},
			{"State" : "ap_ST_fsm_state88", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_freeze_fu_1273"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_freeze_fu_1273"},
			{"State" : "ap_ST_fsm_state111", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyveck_freeze_fu_1273"}],
		"Port" : [
			{"Name" : "sm", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_unpack_sk_fu_1161", "Port" : "tr"},
					{"ID" : "53", "SubInstance" : "grp_pack_sig_fu_1152", "Port" : "sig"},
					{"ID" : "34", "SubInstance" : "grp_keccak_absorb_fu_1115", "Port" : "m"}]},
			{"Name" : "smlen", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mlen", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_unpack_sk_fu_1161", "Port" : "sk"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_keccak_squeezeblocks_2_fu_1144", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "34", "SubInstance" : "grp_keccak_absorb_fu_1115", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "23", "SubInstance" : "grp_challenge_fu_1106", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "47", "SubInstance" : "grp_keccak_squeezeblocks_1_fu_1133", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "38", "SubInstance" : "grp_expand_mat_fu_1125", "Port" : "KeccakF_RoundConstan"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_ntt_1_fu_1216", "Port" : "zetas"},
					{"ID" : "65", "SubInstance" : "grp_ntt_2_fu_1226", "Port" : "zetas"},
					{"ID" : "61", "SubInstance" : "grp_ntt_fu_1206", "Port" : "zetas"}]},
			{"Name" : "zetas_inv", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "grp_invntt_frominvmont_fu_1188", "Port" : "zetas_inv"},
					{"ID" : "55", "SubInstance" : "grp_invntt_frominvmont_1_fu_1177", "Port" : "zetas_inv"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inbuf_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.outbuf_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.output_assign_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.seedbuf_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.c_coeffs_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.chat_coeffs_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mat_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s1_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.y_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.yhat_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.z_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s2_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t0_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w1_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.h_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.wcs2_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.wcs20_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ct0_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tmp_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106", "Parent" : "0", "Child" : ["24", "25", "26", "27", "31"],
		"CDFG" : "challenge",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_absorb_2_fu_349"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_squeezeblocks_2_fu_357"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_squeezeblocks_2_fu_357"}],
		"Port" : [
			{"Name" : "c_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "mu", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "grp_keccak_absorb_2_fu_349", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "31", "SubInstance" : "grp_keccak_squeezeblocks_2_fu_357", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.inbuf_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.outbuf_U", "Parent" : "23"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.state_U", "Parent" : "23"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_absorb_2_fu_349", "Parent" : "23", "Child" : ["28", "29"],
		"CDFG" : "keccak_absorb_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2026", "EstimateLatencyMax" : "2026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_303"}],
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_KeccakF1600_StatePer_fu_303", "Port" : "state"}]},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "29", "SubInstance" : "grp_KeccakF1600_StatePer_fu_303", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_absorb_2_fu_349.t_U", "Parent" : "27"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_absorb_2_fu_349.grp_KeccakF1600_StatePer_fu_303", "Parent" : "27", "Child" : ["30"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_absorb_2_fu_349.grp_KeccakF1600_StatePer_fu_303.KeccakF_RoundConstan_U", "Parent" : "29"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_squeezeblocks_2_fu_357", "Parent" : "23", "Child" : ["32"],
		"CDFG" : "keccak_squeezeblocks_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "241", "EstimateLatencyMax" : "241",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_118"}],
		"Port" : [
			{"Name" : "h", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_KeccakF1600_StatePer_fu_118", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_KeccakF1600_StatePer_fu_118", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_squeezeblocks_2_fu_357.grp_KeccakF1600_StatePer_fu_118", "Parent" : "31", "Child" : ["33"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "33", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_challenge_fu_1106.grp_keccak_squeezeblocks_2_fu_357.grp_KeccakF1600_StatePer_fu_118.KeccakF_RoundConstan_U", "Parent" : "32"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_fu_1115", "Parent" : "0", "Child" : ["35", "36"],
		"CDFG" : "keccak_absorb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_308"}],
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_KeccakF1600_StatePer_fu_308", "Port" : "state"}]},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "mlen", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_KeccakF1600_StatePer_fu_308", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_fu_1115.t_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_fu_1115.grp_KeccakF1600_StatePer_fu_308", "Parent" : "34", "Child" : ["37"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_fu_1115.grp_KeccakF1600_StatePer_fu_308.KeccakF_RoundConstan_U", "Parent" : "36"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125", "Parent" : "0", "Child" : ["39", "40", "41", "42", "45"],
		"CDFG" : "expand_mat",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_squeezeblocks_3_fu_228"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_keccak_absorb_3_fu_236"}],
		"Port" : [
			{"Name" : "mat_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rho", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_keccak_squeezeblocks_3_fu_228", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.s_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.inbuf_U", "Parent" : "38"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.output_assign_U", "Parent" : "38"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.grp_keccak_squeezeblocks_3_fu_228", "Parent" : "38", "Child" : ["43"],
		"CDFG" : "keccak_squeezeblocks_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1421", "EstimateLatencyMax" : "1421",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_117"}],
		"Port" : [
			{"Name" : "h", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_KeccakF1600_StatePer_fu_117", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_KeccakF1600_StatePer_fu_117", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.grp_keccak_squeezeblocks_3_fu_228.grp_KeccakF1600_StatePer_fu_117", "Parent" : "42", "Child" : ["44"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.grp_keccak_squeezeblocks_3_fu_228.grp_KeccakF1600_StatePer_fu_117.KeccakF_RoundConstan_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.grp_keccak_absorb_3_fu_236", "Parent" : "38", "Child" : ["46"],
		"CDFG" : "keccak_absorb_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "663", "EstimateLatencyMax" : "663",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_1125.grp_keccak_absorb_3_fu_236.t_U", "Parent" : "45"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeezeblocks_1_fu_1133", "Parent" : "0", "Child" : ["48"],
		"CDFG" : "keccak_squeezeblocks_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "241", "EstimateLatencyMax" : "1201",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_125"}],
		"Port" : [
			{"Name" : "h", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "nblocks", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_KeccakF1600_StatePer_fu_125", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_KeccakF1600_StatePer_fu_125", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeezeblocks_1_fu_1133.grp_KeccakF1600_StatePer_fu_125", "Parent" : "47", "Child" : ["49"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeezeblocks_1_fu_1133.grp_KeccakF1600_StatePer_fu_125.KeccakF_RoundConstan_U", "Parent" : "48"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeezeblocks_2_fu_1144", "Parent" : "0", "Child" : ["51"],
		"CDFG" : "keccak_squeezeblocks_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "241", "EstimateLatencyMax" : "241",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_118"}],
		"Port" : [
			{"Name" : "h", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_KeccakF1600_StatePer_fu_118", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_KeccakF1600_StatePer_fu_118", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeezeblocks_2_fu_1144.grp_KeccakF1600_StatePer_fu_118", "Parent" : "50", "Child" : ["52"],
		"CDFG" : "KeccakF1600_StatePer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeezeblocks_2_fu_1144.grp_KeccakF1600_StatePer_fu_118.KeccakF_RoundConstan_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pack_sig_fu_1152", "Parent" : "0",
		"CDFG" : "pack_sig",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sig", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "c_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_unpack_sk_fu_1161", "Parent" : "0",
		"CDFG" : "unpack_sk",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3324", "EstimateLatencyMax" : "3324",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "rho", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "tr", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s1_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s2_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "t0_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_1_fu_1177", "Parent" : "0", "Child" : ["56"],
		"CDFG" : "invntt_frominvmont_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas_inv", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_1_fu_1177.zetas_inv_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_fu_1188", "Parent" : "0", "Child" : ["58"],
		"CDFG" : "invntt_frominvmont",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas_inv", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_fu_1188.zetas_inv_U", "Parent" : "57"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_1197", "Parent" : "0", "Child" : ["60"],
		"CDFG" : "polyvecl_pointwise_a",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6409", "EstimateLatencyMax" : "6409",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "w_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "w_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "u_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_1197.t_coeffs_U", "Parent" : "59"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ntt_fu_1206", "Parent" : "0", "Child" : ["62"],
		"CDFG" : "ntt",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ntt_fu_1206.zetas_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ntt_1_fu_1216", "Parent" : "0", "Child" : ["64"],
		"CDFG" : "ntt_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ntt_1_fu_1216.zetas_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ntt_2_fu_1226", "Parent" : "0", "Child" : ["66"],
		"CDFG" : "ntt_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ntt_2_fu_1226.zetas_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyveck_make_hint_fu_1233", "Parent" : "0",
		"CDFG" : "polyveck_make_hint",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6153", "EstimateLatencyMax" : "6153",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "u_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rej_gamma1m1_fu_1240", "Parent" : "0",
		"CDFG" : "rej_gamma1m1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_offset1", "Type" : "None", "Direction" : "I"},
			{"Name" : "len", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buflen", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_1255", "Parent" : "0", "Child" : ["70"],
		"CDFG" : "keccak_absorb_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "653", "EstimateLatencyMax" : "653",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_1255.t_U", "Parent" : "69"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyveck_decompose_fu_1261", "Parent" : "0",
		"CDFG" : "polyveck_decompose",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4105", "EstimateLatencyMax" : "4105",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v1_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v0_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyveck_chknorm_fu_1268", "Parent" : "0",
		"CDFG" : "polyveck_chknorm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "21", "EstimateLatencyMax" : "3093",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyveck_freeze_fu_1273", "Parent" : "0",
		"CDFG" : "polyveck_freeze",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3081", "EstimateLatencyMax" : "3081",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	crypto_sign {
		sm {Type IO LastRead 6 FirstWrite -1}
		smlen {Type O LastRead -1 FirstWrite 52}
		m {Type I LastRead 2 FirstWrite -1}
		mlen {Type I LastRead 1 FirstWrite -1}
		sk {Type I LastRead 11 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}
		zetas_inv {Type I LastRead -1 FirstWrite -1}}
	challenge {
		c_coeffs {Type IO LastRead 12 FirstWrite 7}
		mu {Type I LastRead 1 FirstWrite -1}
		w1_vec_coeffs {Type I LastRead 4 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_2 {
		s {Type IO LastRead 13 FirstWrite 1}
		m {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_squeezeblocks_2 {
		h {Type O LastRead -1 FirstWrite 5}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb {
		s {Type IO LastRead 13 FirstWrite 1}
		m {Type I LastRead 5 FirstWrite -1}
		mlen {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	expand_mat {
		mat_vec_coeffs {Type O LastRead -1 FirstWrite 10}
		rho {Type I LastRead 1 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_squeezeblocks_3 {
		h {Type O LastRead -1 FirstWrite 5}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_3 {
		s {Type IO LastRead 6 FirstWrite 1}
		m {Type I LastRead 3 FirstWrite -1}}
	keccak_squeezeblocks_1 {
		h {Type O LastRead -1 FirstWrite 5}
		nblocks {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	keccak_squeezeblocks_2 {
		h {Type O LastRead -1 FirstWrite 5}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	pack_sig {
		sig {Type IO LastRead 6 FirstWrite 3}
		z_vec_coeffs {Type I LastRead 4 FirstWrite -1}
		h_vec_coeffs {Type I LastRead 3 FirstWrite -1}
		c_coeffs {Type I LastRead 5 FirstWrite -1}}
	unpack_sk {
		rho {Type O LastRead -1 FirstWrite 2}
		tr {Type O LastRead -1 FirstWrite 4}
		s1_vec_coeffs {Type O LastRead -1 FirstWrite 6}
		s2_vec_coeffs {Type O LastRead -1 FirstWrite 7}
		t0_vec_coeffs {Type O LastRead -1 FirstWrite 8}
		sk {Type I LastRead 11 FirstWrite -1}}
	invntt_frominvmont_1 {
		p {Type IO LastRead 6 FirstWrite 5}
		p_offset {Type I LastRead 0 FirstWrite -1}
		zetas_inv {Type I LastRead -1 FirstWrite -1}}
	invntt_frominvmont {
		p {Type IO LastRead 6 FirstWrite 5}
		p_offset {Type I LastRead 0 FirstWrite -1}
		zetas_inv {Type I LastRead -1 FirstWrite -1}}
	polyvecl_pointwise_a {
		w_coeffs {Type IO LastRead 4 FirstWrite 5}
		w_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		u_vec_coeffs {Type I LastRead 3 FirstWrite -1}
		v_vec_coeffs {Type I LastRead 3 FirstWrite -1}}
	ntt {
		p {Type IO LastRead 11 FirstWrite 10}
		p_offset {Type I LastRead 0 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}}
	ntt_1 {
		p {Type IO LastRead 11 FirstWrite 10}
		p_offset {Type I LastRead 0 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}}
	ntt_2 {
		p {Type IO LastRead 11 FirstWrite 10}
		zetas {Type I LastRead -1 FirstWrite -1}}
	polyveck_make_hint {
		h_vec_coeffs {Type O LastRead -1 FirstWrite 7}
		u_vec_coeffs {Type I LastRead 2 FirstWrite -1}
		v_vec_coeffs {Type I LastRead 2 FirstWrite -1}}
	rej_gamma1m1 {
		a {Type O LastRead -1 FirstWrite 3}
		a_offset {Type I LastRead 0 FirstWrite -1}
		a_offset1 {Type I LastRead 0 FirstWrite -1}
		len {Type I LastRead 0 FirstWrite -1}
		buf_r {Type I LastRead 3 FirstWrite -1}
		buflen {Type I LastRead 0 FirstWrite -1}}
	keccak_absorb_1 {
		s {Type IO LastRead 6 FirstWrite 1}
		m {Type I LastRead 3 FirstWrite -1}}
	polyveck_decompose {
		v1_vec_coeffs {Type O LastRead -1 FirstWrite 5}
		v0_vec_coeffs {Type O LastRead -1 FirstWrite 5}
		v_vec_coeffs {Type I LastRead 2 FirstWrite -1}}
	polyveck_chknorm {
		v_vec_coeffs {Type I LastRead 2 FirstWrite -1}}
	polyveck_freeze {
		v_vec_coeffs {Type IO LastRead 2 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sm { ap_memory {  { sm_address0 mem_address 1 13 }  { sm_ce0 mem_ce 1 1 }  { sm_we0 mem_we 1 1 }  { sm_d0 mem_din 1 8 }  { sm_q0 mem_dout 0 8 } } }
	smlen { ap_memory {  { smlen_address0 mem_address 1 1 }  { smlen_ce0 mem_ce 1 1 }  { smlen_we0 mem_we 1 1 }  { smlen_d0 mem_din 1 64 } } }
	m { ap_memory {  { m_address0 mem_address 1 12 }  { m_ce0 mem_ce 1 1 }  { m_q0 mem_dout 0 8 } } }
	mlen { ap_none {  { mlen in_data 0 64 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 12 }  { sk_ce0 mem_ce 1 1 }  { sk_q0 mem_dout 0 8 }  { sk_address1 mem_address 1 12 }  { sk_ce1 mem_ce 1 1 }  { sk_q1 mem_dout 0 8 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
