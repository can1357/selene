#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_request_block_t.start.hpp"
namespace stor::port
{
    struct storage_request_block_t;

    // [struct _STORAGE_REQUEST_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct storage_request_block_t                                             
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                     
        _m000 uint16_t                                    length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m001 uint8_t                                     function;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Function
        _m002 uint8_t                                     srb_status;            //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .SrbStatus
        _m003 uint32_t                                    signature;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Signature
        _m004 uint32_t                                    version;               //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Version
        _m005 uint32_t                                    srb_length;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SrbLength
        _m006 uint32_t                                    srb_function;          //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SrbFunction
        _m007 uint32_t                                    srb_flags;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .SrbFlags
        _m008 uint32_t                                    request_tag;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestTag
        _m009 uint16_t                                    request_priority;      //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .RequestPriority
        _m010 uint16_t                                    request_attribute;     //{ +0x0026    +0x0026    +0x0026    +0x0026    +0x0026    } | .RequestAttribute
        _m011 uint32_t                                    time_out_value;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TimeOutValue
        _m012 uint32_t                                    system_status;         //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .SystemStatus
        _m013 uint32_t                                    zero_guard1;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .ZeroGuard1
        _m014 uint32_t                                    address_offset;        //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .AddressOffset
        _m015 uint32_t                                    num_srb_ex_data;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .NumSrbExData
        _m016 uint32_t                                    data_transfer_length;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .DataTransferLength
        _m017 void*                                       data_buffer;           //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DataBuffer
        _m018 void*                                       zero_guard2;           //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ZeroGuard2
        _m019 void*                                       original_request;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .OriginalRequest
        _m020 void*                                       class_context;         //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .ClassContext
        _m021 void*                                       port_context;          //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .PortContext
        _m022 void*                                       miniport_context;      //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .MiniportContext
        _m023 struct stor::port::storage_request_block_t* next_srb;              //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .NextSrb
        _m024 sdk::array<uint32_t, 1>                     srb_ex_data_offset;    //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .SrbExDataOffset
                                                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                     
        _m025 uint32_t                                    reserved_ulong1;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ReservedUlong1
        _m026 uint32_t                                    reserved_ulong2;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ReservedUlong2
                                                                               
        // Windows 10 v1607                                                    
        //                                                                     
        _m027 sdk::array<uint8_t, 4>                      reserved_uchar;        //{ +0x0004    } | .ReservedUchar
        _m028 uint32_t                                    reserved_ulong;        //{ +0x001c    } | .ReservedUlong
                                                                               
        SDK_NONVOL_PROPERTIES( "_STORAGE_REQUEST_BLOCK.$", 0x80, true, 0x109b285fc70d4bbd );                     
        SDK_FIXED_SIZE( storage_request_block_t, 0x80 );                       
    };                                                                         
};
#include "magic/storage_request_block_t.end.hpp"
SDK_VERIFY( struct stor::port::storage_request_block_t, 0x80 );
