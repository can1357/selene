#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_vdm_instemul_info_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_VDM_INSTEMUL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_vdm_instemul_info_t       
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                  
        _m000 uint32_t segment_not_present;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SegmentNotPresent
        _m001 uint32_t vdm_opcode0f;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VdmOpcode0F
        _m002 uint32_t opcode_es_prefix;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OpcodeESPrefix
        _m003 uint32_t opcode_cs_prefix;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OpcodeCSPrefix
        _m004 uint32_t opcode_ss_prefix;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpcodeSSPrefix
        _m005 uint32_t opcode_ds_prefix;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OpcodeDSPrefix
        _m006 uint32_t opcode_fs_prefix;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OpcodeFSPrefix
        _m007 uint32_t opcode_gs_prefix;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .OpcodeGSPrefix
        _m008 uint32_t opcode_oper32_prefix;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OpcodeOPER32Prefix
        _m009 uint32_t opcode_addr32_prefix;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .OpcodeADDR32Prefix
        _m010 uint32_t opcode_insb;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OpcodeINSB
        _m011 uint32_t opcode_insw;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .OpcodeINSW
        _m012 uint32_t opcode_outsb;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OpcodeOUTSB
        _m013 uint32_t opcode_outsw;          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .OpcodeOUTSW
        _m014 uint32_t opcode_pushf;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OpcodePUSHF
        _m015 uint32_t opcode_popf;           //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .OpcodePOPF
        _m016 uint32_t opcode_in_tnn;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .OpcodeINTnn
        _m017 uint32_t opcode_into;           //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .OpcodeINTO
        _m018 uint32_t opcode_iret;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .OpcodeIRET
        _m019 uint32_t opcode_in_bimm;        //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .OpcodeINBimm
        _m020 uint32_t opcode_in_wimm;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .OpcodeINWimm
        _m021 uint32_t opcode_out_bimm;       //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .OpcodeOUTBimm
        _m022 uint32_t opcode_out_wimm;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OpcodeOUTWimm
        _m023 uint32_t opcode_inb;            //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .OpcodeINB
        _m024 uint32_t opcode_inw;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .OpcodeINW
        _m025 uint32_t opcode_outb;           //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .OpcodeOUTB
        _m026 uint32_t opcode_outw;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .OpcodeOUTW
        _m027 uint32_t opcode_lock_prefix;    //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .OpcodeLOCKPrefix
        _m028 uint32_t opcode_repne_prefix;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .OpcodeREPNEPrefix
        _m029 uint32_t opcode_rep_prefix;     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .OpcodeREPPrefix
        _m030 uint32_t opcode_hlt;            //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .OpcodeHLT
        _m031 uint32_t opcode_cli;            //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .OpcodeCLI
        _m032 uint32_t opcode_sti;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .OpcodeSTI
        _m033 uint32_t bop_count;             //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .BopCount
                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_VDM_INSTEMUL_INFO.$", 0x88, true, 0x182183c067e0d8f6 );                     
        SDK_FIXED_SIZE( system_vdm_instemul_info_t, 0x88 );                     
    };                                      
};
#include "magic/system_vdm_instemul_info_t.end.hpp"
SDK_VERIFY( struct win::system_vdm_instemul_info_t, 0x88 );
