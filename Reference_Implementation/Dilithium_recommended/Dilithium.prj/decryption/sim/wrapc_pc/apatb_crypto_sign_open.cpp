// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "m"
#define AUTOTB_TVIN_m  "../tv/cdatafile/c.crypto_sign_open.autotvin_m.dat"
#define AUTOTB_TVOUT_m  "../tv/cdatafile/c.crypto_sign_open.autotvout_m.dat"
// wrapc file define: "mlen"
#define AUTOTB_TVIN_mlen  "../tv/cdatafile/c.crypto_sign_open.autotvin_mlen.dat"
#define AUTOTB_TVOUT_mlen  "../tv/cdatafile/c.crypto_sign_open.autotvout_mlen.dat"
// wrapc file define: "sm"
#define AUTOTB_TVIN_sm  "../tv/cdatafile/c.crypto_sign_open.autotvin_sm.dat"
// wrapc file define: "smlen"
#define AUTOTB_TVIN_smlen  "../tv/cdatafile/c.crypto_sign_open.autotvin_smlen.dat"
// wrapc file define: "pk"
#define AUTOTB_TVIN_pk  "../tv/cdatafile/c.crypto_sign_open.autotvin_pk.dat"
// wrapc file define: "ap_return"
#define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.crypto_sign_open.autotvout_ap_return.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "m"
#define AUTOTB_TVOUT_PC_m  "../tv/rtldatafile/rtl.crypto_sign_open.autotvout_m.dat"
// tvout file define: "mlen"
#define AUTOTB_TVOUT_PC_mlen  "../tv/rtldatafile/rtl.crypto_sign_open.autotvout_mlen.dat"
// tvout file define: "ap_return"
#define AUTOTB_TVOUT_PC_ap_return  "../tv/rtldatafile/rtl.crypto_sign_open.autotvout_ap_return.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			m_depth = 0;
			mlen_depth = 0;
			sm_depth = 0;
			smlen_depth = 0;
			pk_depth = 0;
			ap_return_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{m " << m_depth << "}\n";
			total_list << "{mlen " << mlen_depth << "}\n";
			total_list << "{sm " << sm_depth << "}\n";
			total_list << "{smlen " << smlen_depth << "}\n";
			total_list << "{pk " << pk_depth << "}\n";
			total_list << "{ap_return " << ap_return_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int m_depth;
		int mlen_depth;
		int sm_depth;
		int smlen_depth;
		int pk_depth;
		int ap_return_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern "C" int crypto_sign_open (
char m[3400],
long long unsigned int mlen[1],
char sm[6101],
long long unsigned int smlen,
char pk[1472]);

extern "C" int AESL_WRAP_crypto_sign_open (
char m[3400],
long long unsigned int mlen[1],
char sm[6101],
long long unsigned int smlen,
char pk[1472])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;

		int AESL_return;

		// output port post check: "m"
		aesl_fh.read(AUTOTB_TVOUT_PC_m, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_m, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_m, AESL_token); // data

			sc_bv<8> *m_pc_buffer = new sc_bv<8>[3400];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'm', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'm', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					m_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_m, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_m))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: m
				{
					// bitslice(7, 0)
					// {
						// celement: m(7, 0)
						// {
							sc_lv<8>* m_lv0_0_3399_1 = new sc_lv<8>[3400];
						// }
					// }

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: m(7, 0)
						{
							// carray: (0) => (3399) @ (1)
							for (int i_0 = 0; i_0 <= 3399; i_0 += 1)
							{
								if (&(m[0]) != NULL) // check the null address if the c port is array or others
								{
									m_lv0_0_3399_1[hls_map_index].range(7, 0) = sc_bv<8>(m_pc_buffer[hls_map_index].range(7, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(7, 0)
					{
						int hls_map_index = 0;
						// celement: m(7, 0)
						{
							// carray: (0) => (3399) @ (1)
							for (int i_0 = 0; i_0 <= 3399; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : m[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : m[0]
								// output_left_conversion : m[i_0]
								// output_type_conversion : (m_lv0_0_3399_1[hls_map_index]).to_uint64()
								if (&(m[0]) != NULL) // check the null address if the c port is array or others
								{
									m[i_0] = (m_lv0_0_3399_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] m_pc_buffer;
		}

		// output port post check: "mlen"
		aesl_fh.read(AUTOTB_TVOUT_PC_mlen, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_mlen, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_mlen, AESL_token); // data

			sc_bv<64> *mlen_pc_buffer = new sc_bv<64>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'mlen', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'mlen', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					mlen_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_mlen, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_mlen))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: mlen
				{
					// bitslice(63, 0)
					// {
						// celement: mlen(63, 0)
						// {
							sc_lv<64>* mlen_lv0_0_0_1 = new sc_lv<64>[1];
						// }
					// }

					// bitslice(63, 0)
					{
						int hls_map_index = 0;
						// celement: mlen(63, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								if (&(mlen[0]) != NULL) // check the null address if the c port is array or others
								{
									mlen_lv0_0_0_1[hls_map_index].range(63, 0) = sc_bv<64>(mlen_pc_buffer[hls_map_index].range(63, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(63, 0)
					{
						int hls_map_index = 0;
						// celement: mlen(63, 0)
						{
							// carray: (0) => (0) @ (1)
							for (int i_0 = 0; i_0 <= 0; i_0 += 1)
							{
								// sub                    : i_0
								// ori_name               : mlen[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : mlen[0]
								// output_left_conversion : mlen[i_0]
								// output_type_conversion : (mlen_lv0_0_0_1[hls_map_index]).to_uint64()
								if (&(mlen[0]) != NULL) // check the null address if the c port is array or others
								{
									mlen[i_0] = (mlen_lv0_0_0_1[hls_map_index]).to_uint64();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] mlen_pc_buffer;
		}

		// output port post check: "ap_return"
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data

			sc_bv<32> ap_return_pc_buffer;
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'ap_return', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					ap_return_pc_buffer = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_ap_return, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_ap_return))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: ap_return
				{
					// bitslice(31, 0)
					// {
						// celement: return(31, 0)
						// {
							sc_lv<32> return_lv0_0_1_0;
						// }
					// }

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									return_lv0_0_1_0.range(31, 0) = sc_bv<32>(ap_return_pc_buffer.range(31, 0));
								}
							}
						}
					}

					// bitslice(31, 0)
					{
						// celement: return(31, 0)
						{
							// carray: (0) => (1) @ (0)
							{
								// sub                    : 
								// ori_name               : AESL_return
								// sub_1st_elem           : 
								// ori_name_1st_elem      : AESL_return
								// output_left_conversion : AESL_return
								// output_type_conversion : (return_lv0_0_1_0).to_uint64()
								if (&(AESL_return) != NULL) // check the null address if the c port is array or others
								{
									AESL_return = (return_lv0_0_1_0).to_uint64();
								}
							}
						}
					}
				}
			}
		}

		AESL_transaction_pc++;

		return AESL_return;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "m"
		char* tvin_m = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_m);
		char* tvout_m = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_m);

		// "mlen"
		char* tvin_mlen = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_mlen);
		char* tvout_mlen = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_mlen);

		// "sm"
		char* tvin_sm = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_sm);

		// "smlen"
		char* tvin_smlen = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_smlen);

		// "pk"
		char* tvin_pk = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_pk);

		// "ap_return"
		char* tvout_ap_return = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_ap_return);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_m, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_m, tvin_m);

		sc_bv<8>* m_tvin_wrapc_buffer = new sc_bv<8>[3400];

		// RTL Name: m
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: m(7, 0)
				{
					// carray: (0) => (3399) @ (1)
					for (int i_0 = 0; i_0 <= 3399; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : m[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : m[0]
						// regulate_c_name       : m
						// input_type_conversion : m[i_0]
						if (&(m[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> m_tmp_mem;
							m_tmp_mem = m[i_0];
							m_tvin_wrapc_buffer[hls_map_index].range(7, 0) = m_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 3400; i++)
		{
			sprintf(tvin_m, "%s\n", (m_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_m, tvin_m);
		}

		tcl_file.set_num(3400, &tcl_file.m_depth);
		sprintf(tvin_m, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_m, tvin_m);

		// release memory allocation
		delete [] m_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_mlen, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_mlen, tvin_mlen);

		sc_bv<64>* mlen_tvin_wrapc_buffer = new sc_bv<64>[1];

		// RTL Name: mlen
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: mlen(63, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : mlen[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mlen[0]
						// regulate_c_name       : mlen
						// input_type_conversion : mlen[i_0]
						if (&(mlen[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> mlen_tmp_mem;
							mlen_tmp_mem = mlen[i_0];
							mlen_tvin_wrapc_buffer[hls_map_index].range(63, 0) = mlen_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_mlen, "%s\n", (mlen_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_mlen, tvin_mlen);
		}

		tcl_file.set_num(1, &tcl_file.mlen_depth);
		sprintf(tvin_mlen, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_mlen, tvin_mlen);

		// release memory allocation
		delete [] mlen_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_sm, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_sm, tvin_sm);

		sc_bv<8>* sm_tvin_wrapc_buffer = new sc_bv<8>[6101];

		// RTL Name: sm
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: sm(7, 0)
				{
					// carray: (0) => (6100) @ (1)
					for (int i_0 = 0; i_0 <= 6100; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : sm[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : sm[0]
						// regulate_c_name       : sm
						// input_type_conversion : sm[i_0]
						if (&(sm[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> sm_tmp_mem;
							sm_tmp_mem = sm[i_0];
							sm_tvin_wrapc_buffer[hls_map_index].range(7, 0) = sm_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 6101; i++)
		{
			sprintf(tvin_sm, "%s\n", (sm_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_sm, tvin_sm);
		}

		tcl_file.set_num(6101, &tcl_file.sm_depth);
		sprintf(tvin_sm, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_sm, tvin_sm);

		// release memory allocation
		delete [] sm_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_smlen, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_smlen, tvin_smlen);

		sc_bv<64> smlen_tvin_wrapc_buffer;

		// RTL Name: smlen
		{
			// bitslice(63, 0)
			{
				// celement: smlen(63, 0)
				{
					// carray: (0) => (0) @ (0)
					{
						// sub                   : 
						// ori_name              : smlen
						// sub_1st_elem          : 
						// ori_name_1st_elem     : smlen
						// regulate_c_name       : smlen
						// input_type_conversion : smlen
						if (&(smlen) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> smlen_tmp_mem;
							smlen_tmp_mem = smlen;
							smlen_tvin_wrapc_buffer.range(63, 0) = smlen_tmp_mem.range(63, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_smlen, "%s\n", (smlen_tvin_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_smlen, tvin_smlen);
		}

		tcl_file.set_num(1, &tcl_file.smlen_depth);
		sprintf(tvin_smlen, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_smlen, tvin_smlen);

		// [[transaction]]
		sprintf(tvin_pk, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);

		sc_bv<8>* pk_tvin_wrapc_buffer = new sc_bv<8>[1472];

		// RTL Name: pk
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: pk(7, 0)
				{
					// carray: (0) => (1471) @ (1)
					for (int i_0 = 0; i_0 <= 1471; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : pk[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : pk[0]
						// regulate_c_name       : pk
						// input_type_conversion : pk[i_0]
						if (&(pk[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> pk_tmp_mem;
							pk_tmp_mem = pk[i_0];
							pk_tvin_wrapc_buffer[hls_map_index].range(7, 0) = pk_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1472; i++)
		{
			sprintf(tvin_pk, "%s\n", (pk_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);
		}

		tcl_file.set_num(1472, &tcl_file.pk_depth);
		sprintf(tvin_pk, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_pk, tvin_pk);

		// release memory allocation
		delete [] pk_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		int AESL_return = crypto_sign_open(m, mlen, sm, smlen, pk);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_m, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_m, tvout_m);

		sc_bv<8>* m_tvout_wrapc_buffer = new sc_bv<8>[3400];

		// RTL Name: m
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: m(7, 0)
				{
					// carray: (0) => (3399) @ (1)
					for (int i_0 = 0; i_0 <= 3399; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : m[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : m[0]
						// regulate_c_name       : m
						// input_type_conversion : m[i_0]
						if (&(m[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<8> m_tmp_mem;
							m_tmp_mem = m[i_0];
							m_tvout_wrapc_buffer[hls_map_index].range(7, 0) = m_tmp_mem.range(7, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 3400; i++)
		{
			sprintf(tvout_m, "%s\n", (m_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_m, tvout_m);
		}

		tcl_file.set_num(3400, &tcl_file.m_depth);
		sprintf(tvout_m, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_m, tvout_m);

		// release memory allocation
		delete [] m_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_mlen, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_mlen, tvout_mlen);

		sc_bv<64>* mlen_tvout_wrapc_buffer = new sc_bv<64>[1];

		// RTL Name: mlen
		{
			// bitslice(63, 0)
			{
				int hls_map_index = 0;
				// celement: mlen(63, 0)
				{
					// carray: (0) => (0) @ (1)
					for (int i_0 = 0; i_0 <= 0; i_0 += 1)
					{
						// sub                   : i_0
						// ori_name              : mlen[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : mlen[0]
						// regulate_c_name       : mlen
						// input_type_conversion : mlen[i_0]
						if (&(mlen[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<64> mlen_tmp_mem;
							mlen_tmp_mem = mlen[i_0];
							mlen_tvout_wrapc_buffer[hls_map_index].range(63, 0) = mlen_tmp_mem.range(63, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_mlen, "%s\n", (mlen_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_mlen, tvout_mlen);
		}

		tcl_file.set_num(1, &tcl_file.mlen_depth);
		sprintf(tvout_mlen, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_mlen, tvout_mlen);

		// release memory allocation
		delete [] mlen_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_ap_return, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		sc_bv<32> ap_return_tvout_wrapc_buffer;

		// RTL Name: ap_return
		{
			// bitslice(31, 0)
			{
				// celement: return(31, 0)
				{
					// carray: (0) => (1) @ (0)
					{
						// sub                   : 
						// ori_name              : AESL_return
						// sub_1st_elem          : 
						// ori_name_1st_elem     : AESL_return
						// regulate_c_name       : return
						// input_type_conversion : AESL_return
						if (&(AESL_return) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<32> return_tmp_mem;
							return_tmp_mem = AESL_return;
							ap_return_tvout_wrapc_buffer.range(31, 0) = return_tmp_mem.range(31, 0);
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_ap_return, "%s\n", (ap_return_tvout_wrapc_buffer).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);
		}

		tcl_file.set_num(1, &tcl_file.ap_return_depth);
		sprintf(tvout_ap_return, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_ap_return, tvout_ap_return);

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "m"
		delete [] tvin_m;
		delete [] tvout_m;
		// release memory allocation: "mlen"
		delete [] tvin_mlen;
		delete [] tvout_mlen;
		// release memory allocation: "sm"
		delete [] tvin_sm;
		// release memory allocation: "smlen"
		delete [] tvin_smlen;
		// release memory allocation: "pk"
		delete [] tvin_pk;
		// release memory allocation: "ap_return"
		delete [] tvout_ap_return;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);

		return AESL_return;
	}
}

