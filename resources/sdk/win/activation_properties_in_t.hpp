#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../sec/info_t.hpp"
#include "context_info_t.hpp"
#include "instance_info_t.hpp"
#include "scm_request_info_t.hpp"
#include "instantiation_info_t.hpp"
#include "special_properties_t.hpp"
#include "../tag/custom_header_t.hpp"
#include "server_location_info_t.hpp"
#include "../tag/activation_stage_t.hpp"
#include "user_context_properties_t.hpp"
#include "activation_properties_out_t.hpp"
#include "win_rt_activation_properties_t.hpp"
#include "com_win_rt_activation_properties_t.hpp"
#include "extension_activation_context_properties_t.hpp"

#include "magic/activation_properties_in_t.start.hpp"
namespace win
{
    class serializer_t;
    struct i_class_factory_t;
    struct i_com_class_info_t;
    struct i_system_activator_t;
    class serializable_property_t;
    class inproc_class_activation_properties_t;

    // [class ActivationPropertiesIn]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class activation_properties_in_t                                                                     
    {                                                                                                    
        enum class u0_marshal_state_t : int32_t                                                          
        {                                                                                                
            not_marshalled = 0x1,                                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            sized =          0x2,                                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            marshalled =     0x3,                                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            unmarshalled =   0x4,                                                                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                                                                               
                                                                                                         
        using serializable_ifs_collection_t =               sdk::array<class win::serializable_property_t*, 12>;                                          
        using p_extension_activation_context_properties_t = class win::extension_activation_context_properties_t*;                                          
        using extension_activation_context_properties_t =   class win::extension_activation_context_properties_t;                                          
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                               
        _m000 u0_marshal_state_t                               marshal_state;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._marshalState
        _m001 struct nt::guid_t                                act_clsid;                                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._actCLSID
        _m002 int32_t                                          un_serialized;                              //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._unSerialized
        _m003 int32_t                                          un_serialized_inproc;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._unSerializedInproc
        _m004 int32_t                                          ref_count;                                  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._refCount
        _m005 struct tag::custom_header_t                      ser_header;                                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._serHeader
        _m006 struct tag::custom_header_t                      un_ser_header;                              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | ._unSerHeader
        _m007 uint32_t                                         marshal_flags;                              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | ._marshalFlags
        _m008 uint32_t                                         size;                                       //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | ._size
        _m009 int32_t                                          to_delete;                                  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | ._toDelete
        _m010 int32_t                                          f_destruct;                                 //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | ._fDestruct
        _m011 int32_t                                          f_inproc_serialization_required;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | ._fInprocSerializationRequired
        _m012 uint32_t                                         total_size;                                 //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | ._totalSize
        _m013 serializable_ifs_collection_t                    serializable_ifs_collection;                //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .serializableIfsCollection
        _m014 uint32_t                                         ifs_index;                                  //{ +0x0130    +0x0130    +0x0130    +0x0130    } | ._ifsIndex
        _m015 sdk::array<struct nt::guid_t, 12>                clsid_array;                                //{ +0x0134    +0x0134    +0x0134    +0x0134    } | ._clsidArray
        _m016 sdk::array<uint32_t, 12>                         size_array;                                 //{ +0x01f4    +0x01f4    +0x01f4    +0x01f4    } | ._sizeArray
        _m017 uint32_t                                         header_size;                                //{ +0x0224    +0x0224    +0x0224    +0x0224    } | ._headerSize
        _m018 class win::serializer_t*                         p_un_ser;                                   //{ +0x0228    +0x0228    +0x0228    +0x0228    } | ._pUnSer
        _m019 void*                                            blob;                                       //{ +0x0230    +0x0230    +0x0230    +0x0230    } | ._blob
        _m020 enum tag::activation_stage_t                     stage;                                      //{ +0x0250    +0x0250    +0x0250    +0x0250    } | ._stage
        _m021 uint32_t                                         c_custom_act;                               //{ +0x0254    +0x0254    +0x0254    +0x0254    } | ._cCustomAct
        _m022 uint32_t                                         custom_index;                               //{ +0x0258    +0x0258    +0x0258    +0x0258    } | ._customIndex
        _m023 uint32_t                                         dw_initial_context;                         //{ +0x025c    +0x025c    +0x025c    +0x025c    } | ._dwInitialContext
        _m024 int32_t                                          delegated;                                  //{ +0x0260    +0x0260    +0x0260    +0x0260    } | ._delegated
        _m025 void*                                            client_token;                               //{ +0x0268    +0x0268    +0x0268    +0x0268    } | ._clientToken
        _m026 int32_t                                          f_use_system_identity;                      //{ +0x0270    +0x0270    +0x0270    +0x0270    } | ._fUseSystemIdentity
        _m027 int32_t                                          f_complus_only;                             //{ +0x0274    +0x0274    +0x0274    +0x0274    } | ._fComplusOnly
        _m028 varuint_t                                        allow_remote_propagation;                   //{ +0x0278    +0x0278    +0x0278    +0x0278    } | ._allowRemotePropagation
        _m029 struct win::i_system_activator_t**               custom_act_list;                            //{ +0x0288    +0x0288    +0x0288    +0x0288    } | ._customActList
        _m030 class win::instantiation_info_t*                 pinst;                                      //{ +0x0290    +0x0290    +0x0290    +0x0290    } | ._pinst
        _m031 class win::instance_info_t*                      p_persist;                                  //{ +0x0298    +0x0298    +0x0298    +0x0298    } | ._pPersist
        _m032 class win::context_info_t*                       p_context_info;                             //{ +0x02a0    +0x02a0    +0x02a0    +0x02a0    } | ._pContextInfo
        _m033 class win::server_location_info_t*               p_server_location_info;                     //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | ._pServerLocationInfo
        _m034 class sec::info_t*                               p_security_info;                            //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | ._pSecurityInfo
        _m035 class win::special_properties_t*                 p_special_properties;                       //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | ._pSpecialProperties
        _m036 p_extension_activation_context_properties_t      p_extension_activation_context_properties;  //{ +0x02d0    +0x02c8    +0x02c8    +0x02c8    } | ._pExtensionActivationContextProperties
        _m037 class win::activation_properties_out_t           act_out;                                    //{ +0x02d8    +0x02d0    +0x02d0    +0x02d0    } | ._actOut
        _m038 class sec::info_t                                security_info;                              //{ +0x0660    +0x0690    +0x0690    +0x0690    } | ._securityInfo
        _m039 class win::server_location_info_t                server_location_info;                       //{ +0x06c0    +0x06f0    +0x06f0    +0x06f0    } | ._serverLocationInfo
        _m040 class win::instantiation_info_t                  instantiation_info;                         //{ +0x0708    +0x0738    +0x0738    +0x0738    } | ._instantiationInfo
        _m041 class win::context_info_t                        context_info;                               //{ +0x0800    +0x0830    +0x0830    +0x0830    } | ._contextInfo
        _m042 class win::instance_info_t                       instance_info;                              //{ +0x0870    +0x08a0    +0x08a0    +0x08a0    } | ._instanceInfo
        _m043 class win::scm_request_info_t                    scm_request_info;                           //{ +0x08b8    +0x08e8    +0x08e8    +0x08e8    } | ._scmRequestInfo
        _m044 class win::special_properties_t                  special_properties;                         //{ +0x08e8    +0x0918    +0x0918    +0x0918    } | ._specialProperties
        _m045 extension_activation_context_properties_t        extension_activation_context_properties;    //{ +0x09b8    +0x09e8    +0x09e8    +0x09e8    } | ._extensionActivationContextProperties
        _m046 struct win::i_class_factory_t*                   p_cf;                                       //{ +0x09f0    +0x0a58    +0x0a58    +0x0a58    } | ._pCF
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                          
        //                                                                                               
        _m047 struct win::i_com_class_info_t*                  p_class_info;                               //{ +0x0280    +0x0280    +0x0280    } | ._pClassInfo
        _m048 void*                                            p_dip;                                      //{ +0x09e8    +0x0a50    +0x0a50    } | ._pDip
                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                               
        _m049 class win::com_win_rt_activation_properties_t*   p_com_win_rt_activation_properties;         //{ +0x02c0    +0x02c0    +0x02c0    } | ._pComWinRTActivationProperties
        _m050 class win::com_win_rt_activation_properties_t    com_win_rt_activation_properties;           //{ +0x0990    +0x0990    +0x0990    } | ._comWinRTActivationProperties
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m051 class win::win_rt_activation_properties_t*       p_win_rt_activation_properties;             //{ +0x02c0    } | ._pWinRTActivationProperties
        _m052 class win::user_context_properties_t*            p_user_context_properties;                  //{ +0x02c8    } | ._pUserContextProperties
        _m053 class win::win_rt_activation_properties_t        win_rt_activation_properties;               //{ +0x0960    } | ._winRTActivationProperties
        _m054 class win::user_context_properties_t             user_context_properties;                    //{ +0x0990    } | ._userContextProperties
                                                                                                         
        // Windows 11                                                                                    
        //                                                                                               
        _m055 class win::inproc_class_activation_properties_t* inproc_class_activation_properties;         //{ +0x0a50    } | ._inprocClassActivationProperties
                                                                                                         
        SDK_MAGIC_PROPERTIES( "ActivationPropertiesIn.$", 0xa60, true, 0xdc17fee15f4217df );                                          
        SDK_DYNAMIC_SIZE( activation_properties_in_t );                                                  
    };                                                                                                   
};
#include "magic/activation_properties_in_t.end.hpp"
