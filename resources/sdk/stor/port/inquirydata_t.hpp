#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/inquirydata_t.start.hpp"
namespace stor::port
{
    // [struct _INQUIRYDATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct inquirydata_t                                     
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                   
        _m000 uint5_t                 device_type;             //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DeviceType
        _m001 uint3_t                 device_type_qualifier;   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .DeviceTypeQualifier
        _m002 uint7_t                 device_type_modifier;    //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .DeviceTypeModifier
        _m003 uint1_t                 removable_media;         //{ +0x0001@7  +0x0001@7  +0x0001@7  +0x0001@7  +0x0001@7  } | .RemovableMedia
        _m004 uint8_t                 versions;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Versions
        _m005 uint3_t                 ansi_version;            //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .ANSIVersion
        _m006 uint3_t                 ecma_version;            //{ +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  +0x0002@3  } | .ECMAVersion
        _m007 uint2_t                 iso_version;             //{ +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  +0x0002@6  } | .ISOVersion
        _m008 uint4_t                 response_data_format;    //{ +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  +0x0003@0  } | .ResponseDataFormat
        _m009 uint1_t                 hi_support;              //{ +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  +0x0003@4  } | .HiSupport
        _m010 uint1_t                 norm_aca;                //{ +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  +0x0003@5  } | .NormACA
        _m011 uint1_t                 terminate_task;          //{ +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  +0x0003@6  } | .TerminateTask
        _m012 uint1_t                 aerc;                    //{ +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  +0x0003@7  } | .AERC
        _m013 uint8_t                 additional_length;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AdditionalLength
        _m014 uint1_t                 protect;                 //{ +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  } | .PROTECT
        _m015 uint2_t                 reserved_1;              //{ +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  } | .Reserved_1
        _m016 uint1_t                 third_party_coppy;       //{ +0x0005@3  +0x0005@3  +0x0005@3  +0x0005@3  +0x0005@3  } | .ThirdPartyCoppy
        _m017 uint2_t                 tpgs;                    //{ +0x0005@4  +0x0005@4  +0x0005@4  +0x0005@4  +0x0005@4  } | .TPGS
        _m018 uint1_t                 acc;                     //{ +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  } | .ACC
        _m019 uint1_t                 sccs;                    //{ +0x0005@7  +0x0005@7  +0x0005@7  +0x0005@7  +0x0005@7  } | .SCCS
        _m020 uint1_t                 addr16;                  //{ +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  } | .Addr16
        _m021 uint1_t                 addr32;                  //{ +0x0006@1  +0x0006@1  +0x0006@1  +0x0006@1  +0x0006@1  } | .Addr32
        _m022 uint1_t                 ack_req_q;               //{ +0x0006@2  +0x0006@2  +0x0006@2  +0x0006@2  +0x0006@2  } | .AckReqQ
        _m023 uint1_t                 medium_changer;          //{ +0x0006@3  +0x0006@3  +0x0006@3  +0x0006@3  +0x0006@3  } | .MediumChanger
        _m024 uint1_t                 multi_port;              //{ +0x0006@4  +0x0006@4  +0x0006@4  +0x0006@4  +0x0006@4  } | .MultiPort
        _m025 uint1_t                 reserved_bit2;           //{ +0x0006@5  +0x0006@5  +0x0006@5  +0x0006@5  +0x0006@5  } | .ReservedBit2
        _m026 uint1_t                 enclosure_services;      //{ +0x0006@6  +0x0006@6  +0x0006@6  +0x0006@6  +0x0006@6  } | .EnclosureServices
        _m027 uint1_t                 reserved_bit3;           //{ +0x0006@7  +0x0006@7  +0x0006@7  +0x0006@7  +0x0006@7  } | .ReservedBit3
        _m028 uint1_t                 soft_reset;              //{ +0x0007@0  +0x0007@0  +0x0007@0  +0x0007@0  +0x0007@0  } | .SoftReset
        _m029 uint1_t                 command_queue;           //{ +0x0007@1  +0x0007@1  +0x0007@1  +0x0007@1  +0x0007@1  } | .CommandQueue
        _m030 uint1_t                 transfer_disable;        //{ +0x0007@2  +0x0007@2  +0x0007@2  +0x0007@2  +0x0007@2  } | .TransferDisable
        _m031 uint1_t                 linked_commands;         //{ +0x0007@3  +0x0007@3  +0x0007@3  +0x0007@3  +0x0007@3  } | .LinkedCommands
        _m032 uint1_t                 synchronous;             //{ +0x0007@4  +0x0007@4  +0x0007@4  +0x0007@4  +0x0007@4  } | .Synchronous
        _m033 uint1_t                 wide16_bit;              //{ +0x0007@5  +0x0007@5  +0x0007@5  +0x0007@5  +0x0007@5  } | .Wide16Bit
        _m034 uint1_t                 wide32_bit;              //{ +0x0007@6  +0x0007@6  +0x0007@6  +0x0007@6  +0x0007@6  } | .Wide32Bit
        _m035 uint1_t                 relative_addressing;     //{ +0x0007@7  +0x0007@7  +0x0007@7  +0x0007@7  +0x0007@7  } | .RelativeAddressing
        _m036 sdk::array<uint8_t, 8>  vendor_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VendorId
        _m037 sdk::array<uint8_t, 16> product_id;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProductId
        _m038 sdk::array<uint8_t, 4>  product_revision_level;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ProductRevisionLevel
        _m039 sdk::array<uint8_t, 20> vendor_specific;         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .VendorSpecific
        _m040 sdk::array<uint16_t, 8> version_descriptors;     //{ +0x003a    +0x003a    +0x003a    +0x003a    +0x003a    } | .VersionDescriptors
                                                             
        SDK_NONVOL_PROPERTIES( "_INQUIRYDATA.$", 0x68, true, 0x18b9a1a8c7cb5309 );                       
        SDK_FIXED_SIZE( inquirydata_t, 0x68 );                       
    };                                                       
};
#include "magic/inquirydata_t.end.hpp"
SDK_VERIFY( struct stor::port::inquirydata_t, 0x68 );
