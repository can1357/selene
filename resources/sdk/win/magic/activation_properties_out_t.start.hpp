#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_marshal_state_t), "ActivationPropertiesOut._marshalState", marshal_state, 0xc0, 0x20, true, 0xebc947461284bccd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ActivationPropertiesOut._actCLSID", act_clsid, 0xe0, 0x80, true, 0xe36d6098d2e811e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._unSerialized", un_serialized, 0x160, 0x20, true, 0x54a809d11317952e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._unSerializedInproc", un_serialized_inproc, 0x180, 0x20, true, 0xdb1ddfae8fc28e22)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._refCount", ref_count, 0x1a0, 0x20, true, 0x4e71b1235a28eba7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_header_t), "ActivationPropertiesOut._serHeader", ser_header, 0x1c0, 0x0, true, 0x1c2a20128b9d6d9a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::custom_header_t), "ActivationPropertiesOut._unSerHeader", un_ser_header, 0x3c0, 0x0, true, 0x9450a426fa93d6b7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesOut._marshalFlags", marshal_flags, 0x5c0, 0x20, true, 0x94b38bf30aec6f60)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesOut._size", size, 0x5e0, 0x20, true, 0x68ddac4a4187a176)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._toDelete", to_delete, 0x600, 0x20, true, 0x268da3937cb7508)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._fDestruct", f_destruct, 0x620, 0x20, true, 0xa62d1a4df4282d02)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._fInprocSerializationRequired", f_inproc_serialization_required, 0x640, 0x20, true, 0x94e2e28e6e1b5529)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesOut._totalSize", total_size, 0x660, 0x20, true, 0x9b1e167a96fe31d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<class win::serializable_property_t*, 12>), "ActivationPropertiesOut.serializableIfsCollection", serializable_ifs_collection, 0x680, 0x0, true, 0x58c7fbf9f6e73bf)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesOut._ifsIndex", ifs_index, 0x980, 0x20, true, 0x54d3d4fba419f28e)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 12>), "ActivationPropertiesOut._clsidArray", clsid_array, 0x9a0, 0x0, true, 0x93b184ab8938b3c1)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 12>), "ActivationPropertiesOut._sizeArray", size_array, 0xfa0, 0x80, true, 0xfa3e400616509d47)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ActivationPropertiesOut._headerSize", header_size, 0x1120, 0x20, true, 0x8b389765cd0cda2b)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::serializer_t*), "ActivationPropertiesOut._pUnSer", p_un_ser, 0x1140, 0x40, true, 0xcb9c5181b0b2cc00)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "ActivationPropertiesOut._blob", blob, 0x1180, 0x40, true, 0xc827c1b1298121f5)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::scm_reply_info_t), "ActivationPropertiesOut._scmReplyInfo", scm_reply_info, 0x1ac0, 0x80, true, 0xf0ddb39859bde06b)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::comversion_t), "ActivationPropertiesOut._clientCOMVersion", client_com_version, 0x1c40, 0x20, true, 0x64ff11689f854f92)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "ActivationPropertiesOut._fBrokenRefCount", f_broken_ref_count, 0x1d40, 0x20, true, 0x79762fb7620f502a)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::interface_data_t*), "ActivationPropertiesOut._serializedFactoryData", serialized_factory_data, 0x1d80, 0x40, true, 0xab007280b2d07b03)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "ActivationPropertiesOut._isWinrtActivation", is_winrt_activation, 0x1dc0, 0x8, true, 0xe69641c5eb4cdf5f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif