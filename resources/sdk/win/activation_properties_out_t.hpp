#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "scm_reply_info_t.hpp"
#include "../tag/comversion_t.hpp"
#include "../tag/custom_header_t.hpp"

namespace tag { struct interface_data_t; }

#include "magic/activation_properties_out_t.start.hpp"
namespace win
{
    class serializer_t;
    class serializable_property_t;

    // [class ActivationPropertiesOut]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class activation_properties_out_t                                          
    {                                                                          
        enum class u0_marshal_state_t : int32_t                                
        {                                                                      
            not_marshalled = 0x1,                                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            sized =          0x2,                                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            marshalled =     0x3,                                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            unmarshalled =   0x4,                                                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                                                     
                                                                               
        using serializable_ifs_collection_t = sdk::array<class win::serializable_property_t*, 12>;                                
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                     
        _m00 u0_marshal_state_t                marshal_state;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._marshalState
        _m01 struct nt::guid_t                 act_clsid;                        //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._actCLSID
        _m02 int32_t                           un_serialized;                    //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._unSerialized
        _m03 int32_t                           un_serialized_inproc;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._unSerializedInproc
        _m04 int32_t                           ref_count;                        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._refCount
        _m05 struct tag::custom_header_t       ser_header;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._serHeader
        _m06 struct tag::custom_header_t       un_ser_header;                    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | ._unSerHeader
        _m07 uint32_t                          marshal_flags;                    //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | ._marshalFlags
        _m08 uint32_t                          size;                             //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | ._size
        _m09 int32_t                           to_delete;                        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | ._toDelete
        _m10 int32_t                           f_destruct;                       //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | ._fDestruct
        _m11 int32_t                           f_inproc_serialization_required;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | ._fInprocSerializationRequired
        _m12 uint32_t                          total_size;                       //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | ._totalSize
        _m13 serializable_ifs_collection_t     serializable_ifs_collection;      //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .serializableIfsCollection
        _m14 uint32_t                          ifs_index;                        //{ +0x0130    +0x0130    +0x0130    +0x0130    } | ._ifsIndex
        _m15 sdk::array<struct nt::guid_t, 12> clsid_array;                      //{ +0x0134    +0x0134    +0x0134    +0x0134    } | ._clsidArray
        _m16 sdk::array<uint32_t, 12>          size_array;                       //{ +0x01f4    +0x01f4    +0x01f4    +0x01f4    } | ._sizeArray
        _m17 uint32_t                          header_size;                      //{ +0x0224    +0x0224    +0x0224    +0x0224    } | ._headerSize
        _m18 class win::serializer_t*          p_un_ser;                         //{ +0x0228    +0x0228    +0x0228    +0x0228    } | ._pUnSer
        _m19 void*                             blob;                             //{ +0x0230    +0x0230    +0x0230    +0x0230    } | ._blob
        _m20 class win::scm_reply_info_t       scm_reply_info;                   //{ +0x0350    +0x0358    +0x0358    +0x0358    } | ._scmReplyInfo
        _m21 struct tag::comversion_t          client_com_version;               //{ +0x0380    +0x0388    +0x0388    +0x0388    } | ._clientCOMVersion
        _m22 int32_t                           f_broken_ref_count;               //{ +0x0384    +0x03a8    +0x03a8    +0x03a8    } | ._fBrokenRefCount
                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                     
        _m23 struct tag::interface_data_t*     serialized_factory_data;          //{ +0x03b0    +0x03b0    +0x03b0    } | ._serializedFactoryData
        _m24 bool                              is_winrt_activation;              //{ +0x03b8    +0x03b8    +0x03b8    } | ._isWinrtActivation
                                                                               
        SDK_MAGIC_PROPERTIES( "ActivationPropertiesOut.$", 0x3c0, true, 0x38b3d12c26e67be9 );                                
        SDK_DYNAMIC_SIZE( activation_properties_out_t );                                
    };                                                                         
};
#include "magic/activation_properties_out_t.end.hpp"
