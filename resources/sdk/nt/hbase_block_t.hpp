#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/hbase_block_t.start.hpp"
namespace nt
{
    // [struct _HBASE_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hbase_block_t                                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint32_t                signature;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                sequence1;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Sequence1
        _m02 uint32_t                sequence2;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Sequence2
        _m03 int64_t                 time_stamp;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeStamp
        _m04 uint32_t                major;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Major
        _m05 uint32_t                minor;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Minor
        _m06 uint32_t                type;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Type
        _m07 uint32_t                format;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Format
        _m08 uint32_t                root_cell;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .RootCell
        _m09 uint32_t                length;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Length
        _m10 uint32_t                cluster;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Cluster
        _m11 sdk::array<uint8_t, 64> file_name;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FileName
        _m12 struct nt::guid_t       rm_id;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .RmId
        _m13 struct nt::guid_t       log_id;                //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .LogId
        _m14 uint32_t                flags;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Flags
        _m15 struct nt::guid_t       tm_id;                 //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .TmId
        _m16 uint32_t                guid_signature;        //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .GuidSignature
        _m17 uint64_t                last_reorganize_time;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .LastReorganizeTime
        _m18 uint32_t                check_sum;             //{ +0x01fc    +0x01fc    +0x01fc    +0x01fc    } | .CheckSum
        _m19 struct nt::guid_t       thaw_tm_id;            //{ +0x0fc8    +0x0fc8    +0x0fc8    +0x0fc8    } | .ThawTmId
        _m20 struct nt::guid_t       thaw_rm_id;            //{ +0x0fd8    +0x0fd8    +0x0fd8    +0x0fd8    } | .ThawRmId
        _m21 struct nt::guid_t       thaw_log_id;           //{ +0x0fe8    +0x0fe8    +0x0fe8    +0x0fe8    } | .ThawLogId
        _m22 uint32_t                boot_type;             //{ +0x0ff8    +0x0ff8    +0x0ff8    +0x0ff8    } | .BootType
        _m23 uint32_t                boot_recover;          //{ +0x0ffc    +0x0ffc    +0x0ffc    +0x0ffc    } | .BootRecover
                                                          
        SDK_MAGIC_PROPERTIES( "_HBASE_BLOCK.$", 0x1000, true, 0x33491c6bd54892b9 );                     
        SDK_FIXED_SIZE( hbase_block_t, 0x1000 );                     
    };                                                    
};
#include "magic/hbase_block_t.end.hpp"
SDK_VERIFY( struct nt::hbase_block_t, 0x1000 );
