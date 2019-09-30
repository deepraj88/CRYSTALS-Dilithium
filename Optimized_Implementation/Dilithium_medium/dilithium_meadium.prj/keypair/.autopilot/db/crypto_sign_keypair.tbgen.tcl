set C_TypeInfoList {{ 
"crypto_sign_keypair" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"pk": [[], {"array": [ {"scalar": "unsigned char"}, [1184]]}] }, {"sk": [[], {"array": [ {"scalar": "unsigned char"}, [2800]]}] }],["0"],""],
 "0": [ "DRBG_ctx", [[],"1"],""], 
"1": [ "AES256_CTR_DRBG_struct", {"typedef": [[[],"2"],""]}], 
"2": [ "", {"struct": [[],[],[{ "Key": [[],  {"array": [ {"scalar": "unsigned char"}, [32]]}]},{ "V": [[],  {"array": [ {"scalar": "unsigned char"}, [16]]}]},{ "reseed_counter": [[],  {"scalar": "int"}]}],""]}]
}}
set moduleName crypto_sign_keypair
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
set C_modelName {crypto_sign_keypair}
set C_modelType { int 32 }
set C_modelArgList {
	{ pk int 8 regular {array 1184 { 2 3 } 1 1 }  }
	{ sk int 8 regular {array 2800 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "pk", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "pk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 1183,"step" : 1}]}]}]} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sk","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 2799,"step" : 1}]}]}]} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ pk_address0 sc_out sc_lv 11 signal 0 } 
	{ pk_ce0 sc_out sc_logic 1 signal 0 } 
	{ pk_we0 sc_out sc_logic 1 signal 0 } 
	{ pk_d0 sc_out sc_lv 8 signal 0 } 
	{ pk_q0 sc_in sc_lv 8 signal 0 } 
	{ sk_address0 sc_out sc_lv 12 signal 1 } 
	{ sk_ce0 sc_out sc_logic 1 signal 1 } 
	{ sk_we0 sc_out sc_logic 1 signal 1 } 
	{ sk_d0 sc_out sc_lv 8 signal 1 } 
	{ sk_address1 sc_out sc_lv 12 signal 1 } 
	{ sk_ce1 sc_out sc_logic 1 signal 1 } 
	{ sk_we1 sc_out sc_logic 1 signal 1 } 
	{ sk_d1 sc_out sc_lv 8 signal 1 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "pk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "pk", "role": "address0" }} , 
 	{ "name": "pk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "ce0" }} , 
 	{ "name": "pk_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "pk", "role": "we0" }} , 
 	{ "name": "pk_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "d0" }} , 
 	{ "name": "pk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "pk", "role": "q0" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "we0" }} , 
 	{ "name": "sk_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "d0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "we1" }} , 
 	{ "name": "sk_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "d1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "23", "24", "25", "28", "37", "41", "44", "47", "52", "53", "55", "81", "82", "83", "85"],
		"CDFG" : "crypto_sign_keypair",
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
			{"State" : "ap_ST_fsm_state43", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ntt_fu_670"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rej_eta_1_fu_679"},
			{"State" : "ap_ST_fsm_state35", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rej_eta_1_fu_679"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rej_eta_fu_694"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_rej_eta_fu_694"},
			{"State" : "ap_ST_fsm_state47", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_invntt_frominvmont_fu_709"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_expand_mat_fu_718"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_absorb_1_fu_726"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_squeezebloc_fu_735"},
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_squeezebloc_fu_735"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_squeezebloc_fu_735"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_squeezebloc_fu_735"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_squeezebloc_1_fu_746"},
			{"State" : "ap_ST_fsm_state62", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_squeezebloc_1_fu_746"},
			{"State" : "ap_ST_fsm_state45", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyvecl_pointwise_a_fu_754"},
			{"State" : "ap_ST_fsm_state49", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_add_fu_763"},
			{"State" : "ap_ST_fsm_state51", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_freeze_fu_771"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_randombytes_fu_778"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pack_sk_fu_794"},
			{"State" : "ap_ST_fsm_state59", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_polyt1_pack_fu_805"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_absorb_fu_815"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_absorb_2_fu_821"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake256_absorb_2_fu_821"}],
		"Port" : [
			{"Name" : "pk", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_polyt1_pack_fu_805", "Port" : "r"},
					{"ID" : "37", "SubInstance" : "grp_shake256_absorb_1_fu_726", "Port" : "input_r"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "81", "SubInstance" : "grp_pack_sk_fu_794", "Port" : "sk"}]},
			{"Name" : "DRBG_ctx_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_randombytes_fu_778", "Port" : "DRBG_ctx_V"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_randombytes_fu_778", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_randombytes_fu_778", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_randombytes_fu_778", "Port" : "DRBG_ctx_Key"}]},
			{"Name" : "DRBG_ctx_reseed_coun", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_randombytes_fu_778", "Port" : "DRBG_ctx_reseed_coun"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_expand_mat_fu_718", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "37", "SubInstance" : "grp_shake256_absorb_1_fu_726", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "41", "SubInstance" : "grp_shake256_squeezebloc_fu_735", "Port" : "KeccakF_RoundConstan"},
					{"ID" : "44", "SubInstance" : "grp_shake256_squeezebloc_1_fu_746", "Port" : "KeccakF_RoundConstan"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_ntt_fu_670", "Port" : "zetas"}]},
			{"Name" : "zetas_inv", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "grp_invntt_frominvmont_fu_709", "Port" : "zetas_inv"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t_i34_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inbuf_1_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.outbuf_1_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_1_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.inbuf_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.outbuf_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t_i_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.seedbuf_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.tr_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mat_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s1_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s1hat_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s2_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t1_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t0_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ntt_fu_670", "Parent" : "0", "Child" : ["21", "22"],
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
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state41", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state49", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state57", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state73", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state81", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state89", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state97", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state113", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state121", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state129", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state137", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state145", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state153", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state161", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state169", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state177", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state185", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state193", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state201", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state209", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state217", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state225", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state233", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state249", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state257", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state265", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state273", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state281", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state289", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state297", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state305", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state313", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state329", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state337", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state345", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state353", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state361", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state369", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state377", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state385", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state393", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state401", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state409", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state417", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state433", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state441", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state449", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state457", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state465", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state473", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state481", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state489", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state497", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state505", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state513", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state521", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state529", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state537", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state545", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state553", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state561", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state569", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state577", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state585", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state593", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state601", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state609", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state617", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state625", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state633", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state641", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state649", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state657", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state665", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state673", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state681", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state689", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state697", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state705", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state713", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state721", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state729", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state737", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state745", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state753", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state761", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state769", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state777", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state785", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state793", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state801", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state809", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state817", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state825", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state833", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state841", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state849", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state857", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state865", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state873", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state881", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state889", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state897", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state905", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state913", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state921", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state929", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state937", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state945", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state953", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state961", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state969", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state977", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state985", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state993", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state1001", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state1009", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state1017", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"},
			{"State" : "ap_ST_fsm_state1025", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2164"}],
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ntt_fu_670.zetas_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ntt_fu_670.grp_montgomery_reduce_fu_2164", "Parent" : "20",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rej_eta_1_fu_679", "Parent" : "0",
		"CDFG" : "rej_eta_1",
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
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_rej_eta_fu_694", "Parent" : "0",
		"CDFG" : "rej_eta",
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
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_fu_709", "Parent" : "0", "Child" : ["26", "27"],
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
		"WaitState" : [
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state32", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state39", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state53", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state67", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state74", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state81", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state88", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state95", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state116", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state123", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state130", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state137", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state144", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state151", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state158", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state165", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state172", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state179", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state186", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state193", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state200", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state207", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state214", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state221", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state228", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state235", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state242", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state249", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state256", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state263", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state270", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state277", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state284", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state291", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state298", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state305", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state312", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state319", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state326", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state333", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state340", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state347", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state354", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state361", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state375", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state382", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state389", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state396", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state403", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state410", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state417", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state424", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state431", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state438", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state445", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state452", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state459", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state466", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state473", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state480", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state487", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state494", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state501", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state508", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state515", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state522", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state529", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state536", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state543", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state550", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state557", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state564", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state571", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state578", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state585", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state592", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state599", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state606", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state613", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state620", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state627", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state634", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state641", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state648", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state655", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state662", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state669", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state676", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state683", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state690", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state697", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state704", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state711", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state718", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state725", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state732", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state739", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state746", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state753", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state760", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state767", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state774", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state781", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state788", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state795", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state802", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state809", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state816", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state823", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state830", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state837", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state844", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state851", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state858", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state865", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state872", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state879", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state886", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state893", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state900", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"},
			{"State" : "ap_ST_fsm_state906", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_montgomery_reduce_fu_2187"}],
		"Port" : [
			{"Name" : "p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "p_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas_inv", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_fu_709.zetas_inv_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_invntt_frominvmont_fu_709.grp_montgomery_reduce_fu_2187", "Parent" : "25",
		"CDFG" : "montgomery_reduce",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718", "Parent" : "0", "Child" : ["29", "30", "31", "32", "35"],
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
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake128_squeezebloc_fu_228"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shake128_absorb_fu_236"}],
		"Port" : [
			{"Name" : "mat_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rho", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "32", "SubInstance" : "grp_shake128_squeezebloc_fu_228", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.s_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.inbuf_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.output_assign_U", "Parent" : "28"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.grp_shake128_squeezebloc_fu_228", "Parent" : "28", "Child" : ["33"],
		"CDFG" : "shake128_squeezebloc",
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
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_121"}],
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_KeccakF1600_StatePer_fu_121", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_KeccakF1600_StatePer_fu_121", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.grp_shake128_squeezebloc_fu_228.grp_KeccakF1600_StatePer_fu_121", "Parent" : "32", "Child" : ["34"],
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
	{"ID" : "34", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.grp_shake128_squeezebloc_fu_228.grp_KeccakF1600_StatePer_fu_121.KeccakF_RoundConstan_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.grp_shake128_absorb_fu_236", "Parent" : "28", "Child" : ["36"],
		"CDFG" : "shake128_absorb",
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
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_expand_mat_fu_718.grp_shake128_absorb_fu_236.t_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_1_fu_726", "Parent" : "0", "Child" : ["38", "39"],
		"CDFG" : "shake256_absorb_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3690", "EstimateLatencyMax" : "3690",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_309"}],
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_KeccakF1600_StatePer_fu_309", "Port" : "state"}]},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_KeccakF1600_StatePer_fu_309", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_1_fu_726.t_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_1_fu_726.grp_KeccakF1600_StatePer_fu_309", "Parent" : "37", "Child" : ["40"],
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
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_1_fu_726.grp_KeccakF1600_StatePer_fu_309.KeccakF_RoundConstan_U", "Parent" : "39"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shake256_squeezebloc_fu_735", "Parent" : "0", "Child" : ["42"],
		"CDFG" : "shake256_squeezebloc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "241", "EstimateLatencyMax" : "481",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_129"}],
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "nblocks", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_KeccakF1600_StatePer_fu_129", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_KeccakF1600_StatePer_fu_129", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shake256_squeezebloc_fu_735.grp_KeccakF1600_StatePer_fu_129", "Parent" : "41", "Child" : ["43"],
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
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_shake256_squeezebloc_fu_735.grp_KeccakF1600_StatePer_fu_129.KeccakF_RoundConstan_U", "Parent" : "42"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shake256_squeezebloc_1_fu_746", "Parent" : "0", "Child" : ["45"],
		"CDFG" : "shake256_squeezebloc_1",
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
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_fu_122"}],
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_KeccakF1600_StatePer_fu_122", "Port" : "state"}]},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "45", "SubInstance" : "grp_KeccakF1600_StatePer_fu_122", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shake256_squeezebloc_1_fu_746.grp_KeccakF1600_StatePer_fu_122", "Parent" : "44", "Child" : ["46"],
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
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_shake256_squeezebloc_1_fu_746.grp_KeccakF1600_StatePer_fu_122.KeccakF_RoundConstan_U", "Parent" : "45"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_754", "Parent" : "0", "Child" : ["48", "49", "50", "51"],
		"CDFG" : "polyvecl_pointwise_a",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5386", "EstimateLatencyMax" : "5386",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_add_1_fu_1491"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_poly_add_1_fu_1491"}],
		"Port" : [
			{"Name" : "w_coeffs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_poly_add_1_fu_1491", "Port" : "c_coeffs"}]},
			{"Name" : "w_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "u_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_754.t_coeffs_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_754.grp_poly_add_1_fu_1491", "Parent" : "47",
		"CDFG" : "poly_add_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "c_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_754.grp_reduce32_fu_1499", "Parent" : "47",
		"CDFG" : "reduce32",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_polyvecl_pointwise_a_fu_754.grp_reduce32_fu_1504", "Parent" : "47",
		"CDFG" : "reduce32",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_add_fu_763", "Parent" : "0",
		"CDFG" : "poly_add",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "c_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "c_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_poly_freeze_fu_771", "Parent" : "0", "Child" : ["54"],
		"CDFG" : "poly_freeze",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "385", "EstimateLatencyMax" : "385",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_coeffs_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_poly_freeze_fu_771.grp_freeze_fu_1347", "Parent" : "53",
		"CDFG" : "freeze",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "1", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "0", "EstimateLatencyMin" : "0", "EstimateLatencyMax" : "0",
		"Combinational" : "1",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778", "Parent" : "0", "Child" : ["56", "57", "58", "59", "71"],
		"CDFG" : "randombytes",
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
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_ECB_1_fu_181"}],
		"Port" : [
			{"Name" : "x", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "DRBG_ctx_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "V"},
					{"ID" : "71", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "ctr"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "sbox"},
					{"ID" : "71", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "Rcon"},
					{"ID" : "71", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_AES256_CTR_DRBG_Upda_fu_169", "Port" : "DRBG_ctx_Key"},
					{"ID" : "71", "SubInstance" : "grp_AES256_ECB_1_fu_181", "Port" : "key"}]},
			{"Name" : "DRBG_ctx_reseed_coun", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.DRBG_ctx_V_U", "Parent" : "55"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.DRBG_ctx_Key_U", "Parent" : "55"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.block_U", "Parent" : "55"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169", "Parent" : "55", "Child" : ["60", "61"],
		"CDFG" : "AES256_CTR_DRBG_Upda",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6726", "EstimateLatencyMax" : "6819",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AES256_ECB_fu_171"}],
		"Port" : [
			{"Name" : "V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "ctr"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "Rcon"}]},
			{"Name" : "DRBG_ctx_Key", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_AES256_ECB_fu_171", "Port" : "key"}]}]},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.temp_U", "Parent" : "59"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171", "Parent" : "59", "Child" : ["62", "63", "64", "67"],
		"CDFG" : "AES256_ECB",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2203", "EstimateLatencyMax" : "2203",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeyExpansion_fu_525"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Cipher_fu_536"}],
		"Port" : [
			{"Name" : "key", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_Cipher_fu_536", "Port" : "sbox"},
					{"ID" : "64", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "grp_KeyExpansion_fu_525", "Port" : "Rcon"}]}]},
	{"ID" : "62", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.ctx_RoundKey_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.test_U", "Parent" : "61"},
	{"ID" : "64", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525", "Parent" : "61", "Child" : ["65", "66"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "338", "EstimateLatencyMax" : "338",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "65", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.sbox_U", "Parent" : "64"},
	{"ID" : "66", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_KeyExpansion_fu_525.Rcon_U", "Parent" : "64"},
	{"ID" : "67", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536", "Parent" : "61", "Child" : ["68", "69"],
		"CDFG" : "Cipher",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1846", "EstimateLatencyMax" : "1846",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"}],
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "68", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "69", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "68", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "69", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "68", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_AddRoundKey_fu_238", "Parent" : "67",
		"CDFG" : "AddRoundKey",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "round", "Type" : "None", "Direction" : "I"},
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "69", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249", "Parent" : "67", "Child" : ["70"],
		"CDFG" : "SubBytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "57", "EstimateLatencyMax" : "57",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "70", "Level" : "6", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_CTR_DRBG_Upda_fu_169.grp_AES256_ECB_fu_171.grp_Cipher_fu_536.grp_SubBytes_fu_249.sbox_U", "Parent" : "69"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181", "Parent" : "55", "Child" : ["72", "73", "74", "77"],
		"CDFG" : "AES256_ECB_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2203", "EstimateLatencyMax" : "2203",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeyExpansion_fu_501"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Cipher_fu_512"}],
		"Port" : [
			{"Name" : "key", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Key"}]},
			{"Name" : "ctr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "77", "SubInstance" : "grp_Cipher_fu_512", "Port" : "sbox"},
					{"ID" : "74", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "sbox"}]},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_KeyExpansion_fu_501", "Port" : "Rcon"}]}]},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.ctx_RoundKey_U", "Parent" : "71"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.test_U", "Parent" : "71"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501", "Parent" : "71", "Child" : ["75", "76"],
		"CDFG" : "KeyExpansion",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "338", "EstimateLatencyMax" : "338",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "Key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Rcon", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501.sbox_U", "Parent" : "74"},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_KeyExpansion_fu_501.Rcon_U", "Parent" : "74"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512", "Parent" : "71", "Child" : ["78", "79"],
		"CDFG" : "Cipher",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1846", "EstimateLatencyMax" : "1846",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_AddRoundKey_fu_238"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_SubBytes_fu_249"}],
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "state"},
					{"ID" : "79", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "state"}]},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_AddRoundKey_fu_238", "Port" : "RoundKey"}]},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "79", "SubInstance" : "grp_SubBytes_fu_249", "Port" : "sbox"}]}]},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_AddRoundKey_fu_238", "Parent" : "77",
		"CDFG" : "AddRoundKey",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "round", "Type" : "None", "Direction" : "I"},
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "RoundKey", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_SubBytes_fu_249", "Parent" : "77", "Child" : ["80"],
		"CDFG" : "SubBytes",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "57", "EstimateLatencyMax" : "57",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sbox", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "80", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_randombytes_fu_778.grp_AES256_ECB_1_fu_181.grp_Cipher_fu_512.grp_SubBytes_fu_249.sbox_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pack_sk_fu_794", "Parent" : "0",
		"CDFG" : "pack_sk",
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
			{"Name" : "sk", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "rho", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "tr", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "s1_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "s2_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "t0_vec_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_polyt1_pack_fu_805", "Parent" : "0",
		"CDFG" : "polyt1_pack",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "321", "EstimateLatencyMax" : "321",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "r_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_coeffs_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_fu_815", "Parent" : "0", "Child" : ["84"],
		"CDFG" : "shake256_absorb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "553", "EstimateLatencyMax" : "553",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_fu_815.t_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_2_fu_821", "Parent" : "0", "Child" : ["86"],
		"CDFG" : "shake256_absorb_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "555", "EstimateLatencyMax" : "555",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shake256_absorb_2_fu_821.t_U", "Parent" : "85"}]}


set ArgLastReadFirstWriteLatency {
	crypto_sign_keypair {
		pk {Type IO LastRead 5 FirstWrite -1}
		sk {Type O LastRead -1 FirstWrite 2}
		DRBG_ctx_V {Type IO LastRead -1 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead -1 FirstWrite -1}
		DRBG_ctx_reseed_coun {Type IO LastRead -1 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}
		zetas_inv {Type I LastRead -1 FirstWrite -1}}
	ntt {
		p {Type IO LastRead 1026 FirstWrite 9}
		p_offset {Type I LastRead 0 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	rej_eta_1 {
		a {Type O LastRead -1 FirstWrite 2}
		a_offset {Type I LastRead 0 FirstWrite -1}
		a_offset1 {Type I LastRead 0 FirstWrite -1}
		len {Type I LastRead 0 FirstWrite -1}
		buf_r {Type I LastRead 255 FirstWrite -1}
		buflen {Type I LastRead 0 FirstWrite -1}}
	rej_eta {
		a {Type O LastRead -1 FirstWrite 2}
		a_offset {Type I LastRead 0 FirstWrite -1}
		a_offset1 {Type I LastRead 0 FirstWrite -1}
		len {Type I LastRead 0 FirstWrite -1}
		buf_r {Type I LastRead 255 FirstWrite -1}
		buflen {Type I LastRead 0 FirstWrite -1}}
	invntt_frominvmont {
		p {Type IO LastRead 895 FirstWrite 5}
		p_offset {Type I LastRead 0 FirstWrite -1}
		zetas_inv {Type I LastRead -1 FirstWrite -1}}
	montgomery_reduce {
		a {Type I LastRead 0 FirstWrite -1}}
	expand_mat {
		mat_vec_coeffs {Type O LastRead -1 FirstWrite 10}
		rho {Type I LastRead 1 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	shake128_squeezebloc {
		output_r {Type O LastRead -1 FirstWrite 5}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	shake128_absorb {
		s {Type IO LastRead 6 FirstWrite 1}
		input_r {Type I LastRead 3 FirstWrite -1}}
	shake256_absorb_1 {
		s {Type IO LastRead 13 FirstWrite 1}
		input_r {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	shake256_squeezebloc {
		output_r {Type O LastRead -1 FirstWrite 5}
		nblocks {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	shake256_squeezebloc_1 {
		output_r {Type O LastRead -1 FirstWrite 5}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	polyvecl_pointwise_a {
		w_coeffs {Type IO LastRead 70 FirstWrite 6}
		w_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		u_vec_coeffs {Type I LastRead 4 FirstWrite -1}
		v_vec_coeffs {Type I LastRead 4 FirstWrite -1}}
	poly_add_1 {
		c_coeffs {Type IO LastRead 65 FirstWrite 65}
		a_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		b_coeffs {Type I LastRead 65 FirstWrite -1}}
	reduce32 {
		a {Type I LastRead 0 FirstWrite -1}}
	reduce32 {
		a {Type I LastRead 0 FirstWrite -1}}
	poly_add {
		c_coeffs {Type IO LastRead 65 FirstWrite 65}
		c_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		b_coeffs {Type I LastRead 65 FirstWrite -1}}
	poly_freeze {
		a_coeffs {Type IO LastRead 65 FirstWrite 65}
		a_coeffs_offset {Type I LastRead 0 FirstWrite -1}}
	freeze {
		a {Type I LastRead 0 FirstWrite -1}}
	randombytes {
		x {Type O LastRead -1 FirstWrite 7}
		DRBG_ctx_V {Type IO LastRead -1 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead -1 FirstWrite -1}
		DRBG_ctx_reseed_coun {Type IO LastRead -1 FirstWrite -1}}
	AES256_CTR_DRBG_Upda {
		V {Type IO LastRead 8 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}
		DRBG_ctx_Key {Type IO LastRead 3 FirstWrite -1}}
	AES256_ECB {
		key {Type I LastRead 3 FirstWrite -1}
		ctr {Type I LastRead 8 FirstWrite -1}
		buffer_r {Type O LastRead -1 FirstWrite 12}
		buffer_offset {Type I LastRead 12 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	KeyExpansion {
		RoundKey {Type IO LastRead 6 FirstWrite 2}
		Key {Type I LastRead 3 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	Cipher {
		state {Type IO LastRead 18 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		round {Type I LastRead 0 FirstWrite -1}
		state {Type IO LastRead 2 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}}
	SubBytes {
		state {Type IO LastRead 2 FirstWrite 4}
		sbox {Type I LastRead -1 FirstWrite -1}}
	AES256_ECB_1 {
		key {Type I LastRead 3 FirstWrite -1}
		ctr {Type I LastRead 8 FirstWrite -1}
		buffer_r {Type O LastRead -1 FirstWrite 12}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	KeyExpansion {
		RoundKey {Type IO LastRead 6 FirstWrite 2}
		Key {Type I LastRead 3 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}
		Rcon {Type I LastRead -1 FirstWrite -1}}
	Cipher {
		state {Type IO LastRead 18 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}
		sbox {Type I LastRead -1 FirstWrite -1}}
	AddRoundKey {
		round {Type I LastRead 0 FirstWrite -1}
		state {Type IO LastRead 2 FirstWrite 3}
		RoundKey {Type I LastRead 2 FirstWrite -1}}
	SubBytes {
		state {Type IO LastRead 2 FirstWrite 4}
		sbox {Type I LastRead -1 FirstWrite -1}}
	pack_sk {
		sk {Type O LastRead -1 FirstWrite 2}
		rho {Type I LastRead 2 FirstWrite -1}
		tr {Type I LastRead 3 FirstWrite -1}
		s1_vec_coeffs {Type I LastRead 6 FirstWrite -1}
		s2_vec_coeffs {Type I LastRead 7 FirstWrite -1}
		t0_vec_coeffs {Type I LastRead 9 FirstWrite -1}}
	polyt1_pack {
		r {Type O LastRead -1 FirstWrite 2}
		r_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs {Type I LastRead 8 FirstWrite -1}
		a_coeffs_offset {Type I LastRead 0 FirstWrite -1}}
	shake256_absorb {
		s {Type IO LastRead 6 FirstWrite 1}
		input_r {Type I LastRead 3 FirstWrite -1}}
	shake256_absorb_2 {
		s {Type IO LastRead 6 FirstWrite 1}
		input_r {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	pk { ap_memory {  { pk_address0 mem_address 1 11 }  { pk_ce0 mem_ce 1 1 }  { pk_we0 mem_we 1 1 }  { pk_d0 mem_din 1 8 }  { pk_q0 mem_dout 0 8 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 12 }  { sk_ce0 mem_ce 1 1 }  { sk_we0 mem_we 1 1 }  { sk_d0 mem_din 1 8 }  { sk_address1 mem_address 1 12 }  { sk_ce1 mem_ce 1 1 }  { sk_we1 mem_we 1 1 }  { sk_d1 mem_din 1 8 } } }
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
