#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace xm
{
    // [XmAaaOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39120, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfe30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfd20, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) aaa_op;
    
    // [XmAadOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39160, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfe80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520ed0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfd70, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) aad_op;
    
    // [XmAamOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x391e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dff10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfe00, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) aam_op;
    
    // [XmAasOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dffa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfe90, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) aas_op;
    
    // [XmAccumImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9260, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3920f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393150, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) accum_immediate;
    
    // [XmAccumRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x77c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1020, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) accum_register;
    
    // [XmAdcOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39040, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfd10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfc00, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) adc_op;
    
    // [XmAddOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9480, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3be830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d18b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf640, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) add_op;
    
    // [XmAddOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8e48, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3923a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e7e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393400, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) add_operands;
    
    // [XmAndOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x92e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393090, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) and_op;
    
    // [XmBitCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3ef90, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x2d4f0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3aff0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2d810, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) bit_count;
    
    // [XmBitScanGeneral]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x98d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df450, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) bit_scan_general;
    
    // [XmBoundOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39f80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0de0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) bound_op;
    
    // [XmBsfOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x98a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0bf0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) bsf_op;
    
    // [XmBsrOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39eb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521d10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0c30, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) bsr_op;
    
    // [XmBswapOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a040, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521f70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0e90, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) bswap_op;
    
    // [XmBtOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4340, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391360, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362970, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) bt_op;
    
    // [XmBtcOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39ef0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0c80, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) btc_op;
    
    // [XmBtrOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39f20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0dd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0cc0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) btr_op;
    
    // [XmBtsOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39f50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0e20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0d10, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) bts_op;
    
    // [XmByteImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38c90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df4b0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) byte_immediate;
    
    // [XmCallOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x89b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e6c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393190, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) call_op;
    
    // [XmCbwOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9e50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0d50, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) cbw_op;
    
    // [XmClcOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x58b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3614a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3912c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3628d0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) clc_op;
    
    // [XmCldOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x58a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3614b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3912d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3628e0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) cld_op;
    
    // [XmCliOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17fa0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3614c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3912e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3628f0, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) cli_op;
    
    // [XmCmcOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17fb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3614d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3912f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362900, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) cmc_op;
    
    // [XmCmosAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ff5c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xcf4f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17998, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4f20, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) cmos_address;
    
    // [XmCmpOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8e40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e9e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393570, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) cmp_op;
    
    // [XmCmpsOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39c10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0820, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) cmps_op;
    
    // [XmCmpxchgOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39050, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfd30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520d80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfc20, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) cmpxchg_op;
    
    // [XmCompareOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39cb4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e09dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5219ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e08cc, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) compare_operands;
    
    // [XmContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fa50, 0x11e8 bytes
    // ntoskrnl.exe .data:0xced1a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0c980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced1a0, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) context;
    
    // [XmCwdOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9ff0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521e70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0d90, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) cwd_op;
    
    // [XmDaaOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x392b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfef0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) daa_op;
    
    // [XmDasOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5210b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dff40, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) das_op;
    
    // [XmDecOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9a20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391ed0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392f30, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) dec_op;
    
    // [XmDivOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x78b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c3fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3da3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4d20, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) div_op;
    
    // [XmEffectiveOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9d30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5206b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df4e0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) effective_offset;
    
    // [XmEmulateInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7918, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391dbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e34c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392e1c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) emulate_interrupt;
    
    // [XmEmulateStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8590, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392b88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ef90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393be8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) emulate_stream;
    
    // [XmEmulatorInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db18, 0x11e8 bytes
    // ntoskrnl.exe CFGRO:0xe01841, 0x1fe000 bytes
    // ntoskrnl.exe CFGRO:0xe01844, 0x1fd000 bytes
    // ntoskrnl.exe CFGRO:0xe01841, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) emulator_initialized;
    
    // [XmEnterOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39a40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0650, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) enter_op;
    
    // [XmEvaluateAddressSpecifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x82d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392994, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39eda8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3939f4, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) evaluate_address_specifier;
    
    // [XmEvaluateIndexSpecifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a2bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e1398, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e1288, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) evaluate_index_specifier;
    
    // [XmExecuteInt1a]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a510, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e2154, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522674, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2044, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) execute_int1a;
    
    // [XmFlagsRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9b90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9e00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df560, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) flags_register;
    
    // [XmGeneralBitOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x99a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df6b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df5a0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) general_bit_offset;
    
    // [XmGeneralRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38cc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5207e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df640, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) general_register;
    
    // [XmGetCodeByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8218, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392ce8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f0f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393d48, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) get_code_byte;
    
    // [XmGetImmediateSourceValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x934c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3939a0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) get_immediate_source_value;
    
    // [XmGetLongImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7d40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c01d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d0014, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0fe4, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) get_long_immediate;
    
    // [XmGetOffsetAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7d7c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c3d9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d900c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4bac, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) get_offset_address;
    
    // [XmGetPciData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad20, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a588, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62338, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a568, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) get_pci_data;
    
    // [XmGetRegisterAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8d4c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392d18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393d78, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) get_register_address;
    
    // [XmGetStringAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7f74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bc25c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf67c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bcf9c, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) get_string_address;
    
    // [XmGetStringAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x79c4, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bc2d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf6f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd010, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) get_string_address_range;
    
    // [XmGetWordImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x81dc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393e20, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) get_word_immediate;
    
    // [XmGroup1General]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8c90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3927c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ebb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393820, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) group1_general;
    
    // [XmGroup1Immediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x92f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3928b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ed40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393910, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) group1_immediate;
    
    // [XmGroup2By1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9800, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bc400, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd140, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) group2_by1;
    
    // [XmGroup2ByByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9cd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bc620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bd360, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) group2_by_byte;
    
    // [XmGroup2ByCL]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9850, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3beb40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf950, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) group2_by_cl;
    
    // [XmGroup3General]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9a30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3930b0, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) group3_general;
    
    // [XmGroup45General]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x94e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3beba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf9b0, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) group45_general;
    
    // [XmGroup7General]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38d30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520860, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df6c0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) group7_general;
    
    // [XmGroup8BitOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38d80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5208c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df720, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) group8_bit_offset;
    
    // [XmHltOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39af0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5217e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0700, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) hlt_op;
    
    // [XmIdivOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a1a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e11e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5221b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e10d0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) idiv_op;
    
    // [XmIllOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a080, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0eb0, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) ill_op;
    
    // [XmImmediateEnter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38e30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df8e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520970, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df7d0, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) immediate_enter;
    
    // [XmImmediateJump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38e70, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5209c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df820, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) immediate_jump;
    
    // [XmImulImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa020, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4df980, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df870, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) imul_immediate;
    
    // [XmImulOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9d90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e1030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0f20, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) imul_op;
    
    // [XmImulxOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a0d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e10e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5220b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0fd0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) imulx_op;
    
    // [XmInOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x93c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392fb0, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) in_op;
    
    // [XmIncOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9560, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393040, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) inc_op;
    
    // [XmInitializeEmulator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7710, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c011c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d4498, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0f2c, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) initialize_emulator;
    
    // [XmInsOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39920, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0530, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) ins_op;
    
    // [XmInt1aFindPciClassCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a5a8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e21f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522728, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e20e8, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) int1a_find_pci_class_code;
    
    // [XmInt1aFindPciDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a6b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e231c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x52284c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e220c, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) int1a_find_pci_device;
    
    // [XmInt1aReadConfigRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a7dc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e2448, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522978, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2338, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) int1a_read_config_register;
    
    // [XmInt1aWriteConfigRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a8c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e2530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522a68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e2420, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) int1a_write_config_register;
    
    // [XmIntOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39b10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0720, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) int_op;
    
    // [XmIretOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7af0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e3f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392ec0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) iret_op;
    
    // [XmJcxzOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9f90, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e11b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x522180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e10a0, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) jcxz_op;
    
    // [XmJmpOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9490, 0x11e8 bytes
    // ntoskrnl.exe .text:0x395130, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396190, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) jmp_op;
    
    // [XmJxxOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8da0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x393a30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a13b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x394a90, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) jxx_op;
    
    // [XmLahfOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39900, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5215e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0500, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) lahf_op;
    
    // [XmLeaveOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39bc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e08e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5218b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e07d0, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) leave_op;
    
    // [XmLoadSegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9ae0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfa00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df8f0, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) load_segment;
    
    // [XmLodsOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9590, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0a40, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) lods_op;
    
    // [XmLongJump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8b00, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392d80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393de0, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) long_jump;
    
    // [XmLoopOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x95f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bb9b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bc6f0, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) loop_op;
    
    // [XmMovOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x87c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3926d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f2d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393730, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) mov_op;
    
    // [XmMoveGeneral]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x88e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ecd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3932c0, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) move_general;
    
    // [XmMoveImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9fb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df9c0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) move_immediate;
    
    // [XmMoveRegImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8b60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393260, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) move_reg_immediate;
    
    // [XmMoveSegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9c60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c4580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3de900, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c52f0, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) move_segment;
    
    // [XmMoveXxGeneral]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9660, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3be8d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d1220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf6e0, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) move_xx_general;
    
    // [XmMovsOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7cc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521ba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0ac0, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) movs_op;
    
    // [XmMulOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7ba0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3beaa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d4050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf8b0, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) mul_op;
    
    // [XmNegOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x390b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfda0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520df0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfc90, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) neg_op;
    
    // [XmNoOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17cd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x2604c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x31c960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3480, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) no_operands;
    
    // [XmNopOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) nop_op;
    
    // [XmNotOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9e20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c43a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d72a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5110, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) not_op;
    
    // [XmNumberPciBusses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db09, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507dd, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a58d, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507dd, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) number_pci_busses;
    
    // [XmOpcodeControlTable1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3dbd0, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xd1c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x101a0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xc930, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) opcode_control_table1;
    
    // [XmOpcodeControlTable2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3e060, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0xffc0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x14b20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xfb40, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) opcode_control_table2;
    
    // [XmOpcodeEscape]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x4300, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3912a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3628b0, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) opcode_escape;
    
    // [XmOpcodeFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d820, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x7e20, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x8b20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x7e10, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) opcode_function_table;
    
    // [XmOpcodeRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x87f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ec80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3937d0, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) opcode_register;
    
    // [XmOperandDecodeTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .rdata:0x3d670, 0x11e8 bytes
    // ntoskrnl.exe .rdata:0x7c70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x8970, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x7c60, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) operand_decode_table;
    
    // [XmOrOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x94b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392f50, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) or_op;
    
    // [XmOutOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8130, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391fa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e5f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393000, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) out_op;
    
    // [XmOutsOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x399b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e06d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5216a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e05c0, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) outs_op;
    
    // [XmPciBiosPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db00, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507d0, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) pci_bios_present;
    
    // [XmPCIConfigAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4fd30, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a584, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507d4, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) pci_config_address;
    
    // [XmPopGeneral]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38eb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfb20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfa10, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) pop_general;
    
    // [XmPopOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8250, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3922f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ec50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393350, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) pop_op;
    
    // [XmPopStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7b4c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x39283c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f1f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39389c, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) pop_stack;
    
    // [XmPopaOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7e30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3be850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d4850, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf660, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) popa_op;
    
    // [XmPortDX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9200, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e5c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393060, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) port_dx;
    
    // [XmPortImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38ef0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfb70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd890, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfa60, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) port_immediate;
    
    // [XmPrefixOpcode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x91c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x393f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a1f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x394fd0, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) prefix_opcode;
    
    // [XmPushImmediate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38f20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfbb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfaa0, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) push_immediate;
    
    // [XmPushOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8c20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3922d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ec30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393330, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) push_op;
    
    // [XmPushPopSegment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9c10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bf360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d4810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0170, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) push_pop_segment;
    
    // [XmPushStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7e94, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3926e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f26c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393748, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) push_stack;
    
    // [XmPushaOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7dc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bf3a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d60a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c01b0, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) pusha_op;
    
    // [XmRclOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39350, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e00a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dff90, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) rcl_op;
    
    // [XmRcrOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39410, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5211c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0060, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) rcr_op;
    
    // [XmRdtscOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a0a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0fe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0ed0, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) rdtsc_op;
    
    // [XmRetOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8a50, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3931f0, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) ret_op;
    
    // [XmRolOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x394a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bb730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd8d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bc0e0, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) rol_op;
    
    // [XmRorOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39530, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0100, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) ror_op;
    
    // [XmSahfOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17fd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3614f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391310, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362920, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) sahf_op;
    
    // [XmSarOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x395a0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0180, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) sar_op;
    
    // [XmSbbOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x390d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfdd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfcc0, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) sbb_op;
    
    // [XmScasOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39e10, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0b50, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) scas_op;
    
    // [XmSegmentOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xa090, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c3d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8fa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4b40, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) segment_offset;
    
    // [XmSetDataType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x939c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392d48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f1a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393da8, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) set_data_type;
    
    // [XmSetDestinationValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8d74, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392918, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f1d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393978, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) set_destination_value;
    
    // [XmSetLogicalResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x912c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392318, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393378, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) set_logical_result;
    
    // [XmSetPciData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad28, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a590, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a570, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) set_pci_data;
    
    // [XmSetSourceValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x94bc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392888, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f244, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3938e8, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) set_source_value;
    
    // [XmSetccByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9970, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfbf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfae0, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) setcc_byte;
    
    // [XmShiftDouble]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38f60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfc30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520c80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfb20, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) shift_double;
    
    // [XmShlOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7ff0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ac180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab680, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aeff0, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) shl_op;
    
    // [XmShldOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x39680, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e0370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0260, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) shld_op;
    
    // [XmShortJump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8880, 0x11e8 bytes
    // ntoskrnl.exe .text:0x393a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a1ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x394af0, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) short_jump;
    
    // [XmShrOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9710, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ac2a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ab7a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af110, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) shr_op;
    
    // [XmShrdOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x397b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e04b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e03a0, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) shrd_op;
    
    // [XmSmswOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3a0c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e1010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x521fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e0f00, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) smsw_op;
    
    // [XmStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db1c, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc50530, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a108, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50530, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) status;
    
    // [XmStcOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5dc0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362940, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) stc_op;
    
    // [XmStdOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x17ff0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391340, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362950, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) std_op;
    
    // [XmStiOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5d60, 0x11e8 bytes
    // ntoskrnl.exe .text:0x361530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x391350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x362960, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) sti_op;
    
    // [XmStoreResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x923c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39f2e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3937a0, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) store_result;
    
    // [XmStosOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9e80, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bc170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cf590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bceb0, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) stos_op;
    
    // [XmStringOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9570, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c4090, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4e00, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) string_operands;
    
    // [XmSubOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8e40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393570, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) sub_op;
    
    // [XmSubOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8fa8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392528, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e9f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393588, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) sub_operands;
    
    // [XmSxxOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9930, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4e12f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5222e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e11e0, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) sxx_op;
    
    // [XmTestOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x92e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x392030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x393090, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) test_op;
    
    // [XmXaddOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x390e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfdf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfce0, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) xadd_op;
    
    // [XmXchgOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9bd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392f70, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) xchg_op;
    
    // [XmXlatOpcode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38fe0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dfcb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x520d00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dfba0, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) xlat_opcode;
    
    // [XmXorOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9ad0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c2000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8c00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c2e10, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) xor_op;
};
#include "magic/api.end.hpp"
