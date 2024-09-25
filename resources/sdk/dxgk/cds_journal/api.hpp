#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cds_journal
{
    // [ApplyCdsjToPathModality@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ebc7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e8c38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2eb9ec, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) apply_cdsj_to_path_modality;
    
    // [Augment@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135db0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3a50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139310, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) augment;
    
    // [_CommitEntry@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c2f0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1385d0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) commit_entry;
    
    // [CommitTo@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x132ff8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0b80, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13655c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) commit_to;
    
    // [_ExtendTopology@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ec0d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3ad5f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ebe48, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) extend_topology;
    
    // [_FillEntry@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1354ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3218, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x138a4c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) fill_entry;
    
    // [FillPathDescriptor@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135458, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3184, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1389b8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) fill_path_descriptor;
    
    // [_FillPathDescriptor@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x131940, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1be5bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x134ea4, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) fill_path_descriptor_;
    
    // [_FillTopology@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135c7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3914, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1391dc, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) fill_topology;
    
    // [_IsCDSJWidthAndHeightSwapped@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc04c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd7d8, 0x84380 bytes
    // dxgkrnl.sys .text:0xc4d8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) is_cdsj_width_and_height_swapped;
    
    // [_IsUnextend@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc318, 0x762b0 bytes
    // dxgkrnl.sys .text:0xe13c, 0x84380 bytes
    // dxgkrnl.sys .text:0xc7a4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) is_unextend;
    
    // [_PreVerify@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135f00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c3b9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139460, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) pre_verify;
    
    // [Purge@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x135c34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e3100, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x139194, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) purge;
    
    // [_PurgeRelatedEntries@CDS_JOURNAL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ec764, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3adb50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ec4d4, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) purge_related_entries;
};
#include "magic/api.end.hpp"
