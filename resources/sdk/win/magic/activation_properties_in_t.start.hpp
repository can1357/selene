#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_marshal_state_t), "ActivationPropertiesIn._marshalState", marshal_state, 0xc0, 0x20, true, 0x9dbe6d9c9240cbab)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ActivationPropertiesIn._actCLSID", act_clsid, 0xe0, 0x80, true, 0xbe55d4a53eb84b9d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._unSerialized", un_serialized, 0x160, 0x20, true, 0x3b050326226b2e18)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._unSerializedInproc", un_serialized_inproc, 0x180, 0x20, true, 0xeee2c17b6774e98e)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._refCount", ref_count, 0x1a0, 0x20, true, 0x7dac6345c0932a27)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_header_t), "ActivationPropertiesIn._serHeader", ser_header, 0x1c0, 0x0, true, 0x5baeb2b74102ae4)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_header_t), "ActivationPropertiesIn._unSerHeader", un_ser_header, 0x3c0, 0x0, true, 0xe838567ac89eb9e5)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._marshalFlags", marshal_flags, 0x5c0, 0x20, true, 0x7a886536b00624b6)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._size", size, 0x5e0, 0x20, true, 0x8fcb28b5d3752520)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._toDelete", to_delete, 0x600, 0x20, true, 0xb14c1aecba3ce741)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._fDestruct", f_destruct, 0x620, 0x20, true, 0x393ef4ba50257d99)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._fInprocSerializationRequired", f_inproc_serialization_required, 0x640, 0x20, true, 0x7bb803c5453e7029)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._totalSize", total_size, 0x660, 0x20, true, 0x80840af2b0ac331d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class win::serializable_property_t*, 12>), "ActivationPropertiesIn.serializableIfsCollection", serializable_ifs_collection, 0x680, 0x0, true, 0x8548f5ee4e8e6d74)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._ifsIndex", ifs_index, 0x980, 0x20, true, 0x7c048f158879c1fa)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 12>), "ActivationPropertiesIn._clsidArray", clsid_array, 0x9a0, 0x0, true, 0xb15869aa0587d51c)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 12>), "ActivationPropertiesIn._sizeArray", size_array, 0xfa0, 0x80, true, 0xde60dfe617a7d521)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._headerSize", header_size, 0x1120, 0x20, true, 0x6773aa4a482da211)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::serializer_t*), "ActivationPropertiesIn._pUnSer", p_un_ser, 0x1140, 0x40, true, 0x8cf09cd705dc3f54)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ActivationPropertiesIn._blob", blob, 0x1180, 0x40, true, 0x2d0c7fd30e919f02)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::activation_stage_t), "ActivationPropertiesIn._stage", stage, 0x1280, 0x20, true, 0xd77de0b01fa7cf6f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._cCustomAct", c_custom_act, 0x12a0, 0x20, true, 0x4690c5f429e7a18c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._customIndex", custom_index, 0x12c0, 0x20, true, 0x5c32833a817afe3f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._dwInitialContext", dw_initial_context, 0x12e0, 0x20, true, 0xe651e745b0c9becb)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._delegated", delegated, 0x1300, 0x20, true, 0x81dbcff67b27dd13)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ActivationPropertiesIn._clientToken", client_token, 0x1340, 0x40, true, 0xa99b68a826793460)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._fUseSystemIdentity", f_use_system_identity, 0x1380, 0x20, true, 0x1d3d69cac3a35f25)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesIn._fComplusOnly", f_complus_only, 0x13a0, 0x20, true, 0x4b335c74944d4db5)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "ActivationPropertiesIn._allowRemotePropagation", allow_remote_propagation, 0x13c0, 0x8, true, 0xeac00791cba5bd66, 0, uint32_t,uint8_t)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_system_activator_t**), "ActivationPropertiesIn._customActList", custom_act_list, 0x1440, 0x40, true, 0xa5d3dd0ee5ff4ced)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::instantiation_info_t*), "ActivationPropertiesIn._pinst", pinst, 0x1480, 0x40, true, 0xc90e941ac06344d0)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::instance_info_t*), "ActivationPropertiesIn._pPersist", p_persist, 0x14c0, 0x40, true, 0x43646c1d0ff0f6d9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::context_info_t*), "ActivationPropertiesIn._pContextInfo", p_context_info, 0x1500, 0x40, true, 0xc624f66cbf2abc30)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::server_location_info_t*), "ActivationPropertiesIn._pServerLocationInfo", p_server_location_info, 0x1540, 0x40, true, 0xfb4abaf1f67f405)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class sec::info_t*), "ActivationPropertiesIn._pSecurityInfo", p_security_info, 0x1580, 0x40, true, 0xa667114e9fe29612)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::special_properties_t*), "ActivationPropertiesIn._pSpecialProperties", p_special_properties, 0x15c0, 0x40, true, 0xfe89ee317615c3f8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::extension_activation_context_properties_t*), "ActivationPropertiesIn._pExtensionActivationContextProperties", p_extension_activation_context_properties, 0x1640, 0x40, true, 0x622b614001bf7e0f)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::activation_properties_out_t), "ActivationPropertiesIn._actOut", act_out, 0x1680, 0x0, true, 0xa2313a9400fbabd1)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class sec::info_t), "ActivationPropertiesIn._securityInfo", security_info, 0x3480, 0x0, true, 0xaec2ac0a71295e0)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::server_location_info_t), "ActivationPropertiesIn._serverLocationInfo", server_location_info, 0x3780, 0x40, true, 0x76bd99e4955ae71e)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::instantiation_info_t), "ActivationPropertiesIn._instantiationInfo", instantiation_info, 0x39c0, 0xc0, true, 0x9f1ec9a908d4931e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::context_info_t), "ActivationPropertiesIn._contextInfo", context_info, 0x4180, 0x80, true, 0xd73c40d3e18a8f9d)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::instance_info_t), "ActivationPropertiesIn._instanceInfo", instance_info, 0x4500, 0x40, true, 0x940ce013a5ba7d68)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::scm_request_info_t), "ActivationPropertiesIn._scmRequestInfo", scm_request_info, 0x4740, 0x80, true, 0x7d70e0e3747b4793)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::special_properties_t), "ActivationPropertiesIn._specialProperties", special_properties, 0x48c0, 0xc0, true, 0x60d11816376abd36)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::extension_activation_context_properties_t), "ActivationPropertiesIn._extensionActivationContextProperties", extension_activation_context_properties, 0x4f40, 0x40, true, 0x923afd90730101d4)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_class_factory_t*), "ActivationPropertiesIn._pCF", p_cf, 0x52c0, 0x40, true, 0xd619dc192f042591)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_class_info_t*), "ActivationPropertiesIn._pClassInfo", p_class_info, 0x1400, 0x40, true, 0xfb05d9fd63b73b1c)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ActivationPropertiesIn._pDip", p_dip, 0x5280, 0x40, true, 0x33501c230ef7836c)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::com_win_rt_activation_properties_t*), "ActivationPropertiesIn._pComWinRTActivationProperties", p_com_win_rt_activation_properties, 0x1600, 0x40, true, 0x17ed486b8e8cfa9c)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::com_win_rt_activation_properties_t), "ActivationPropertiesIn._comWinRTActivationProperties", com_win_rt_activation_properties, 0x4c80, 0xc0, true, 0xec85e9f5400b88e)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::win_rt_activation_properties_t*), "ActivationPropertiesIn._pWinRTActivationProperties", p_win_rt_activation_properties, 0x0, 0x0, false, 0xc4b7bfe2cb36e01f)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::user_context_properties_t*), "ActivationPropertiesIn._pUserContextProperties", p_user_context_properties, 0x0, 0x0, false, 0x2ab2f85c8aca3e51)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::win_rt_activation_properties_t), "ActivationPropertiesIn._winRTActivationProperties", win_rt_activation_properties, 0x0, 0x0, false, 0x39900349736cc1df)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::user_context_properties_t), "ActivationPropertiesIn._userContextProperties", user_context_properties, 0x0, 0x0, false, 0x16a4eddc42b45065)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::inproc_class_activation_properties_t*), "ActivationPropertiesIn._inprocClassActivationProperties", inproc_class_activation_properties, 0x0, 0x0, false, 0xb4b67b19805150ec)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#endif