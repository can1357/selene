#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.Version", version, 0x0, 0x0, false, 0xff465ae6223c6201)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.CommandCode", command_code, 0x0, 0x0, false, 0x7335d756f5a1d721)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_COMMAND.InitiateRecall.RecallOffset", recall_offset, 0x0, 0x0, false, 0x1918d50aa4a95a37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_COMMAND.InitiateRecall.RecallLength", recall_length, 0x0, 0x0, false, 0xc44cae9bc369164b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_initiate_recall_t), "_CLOUD_COMMAND.InitiateRecall", initiate_recall, 0x0, 0x0, false, 0xdf9d0763892b7580)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_COMMAND.Deflate.DeflateOffset", deflate_offset, 0x0, 0x0, false, 0x420c6c46130e5749)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_COMMAND.Deflate.DeflateLength", deflate_length, 0x0, 0x0, false, 0x16535e2d48ef52ed)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_deflate_t), "_CLOUD_COMMAND.Deflate", deflate, 0x0, 0x0, false, 0x3e62679a4e4c3e4b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_COMMAND.UpdatePlaceholderIdentity.NewServerFileSize", new_server_file_size, 0x0, 0x0, false, 0xcb15b6e014b483b9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.UpdatePlaceholderIdentity.FileIdentityOffset", file_identity_offset, 0x0, 0x0, false, 0x42795c287f1967a5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.UpdatePlaceholderIdentity.FileIdentityLength", file_identity_length, 0x0, 0x0, false, 0x3373f733e57675a5)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_update_placeholder_identity_t), "_CLOUD_COMMAND.UpdatePlaceholderIdentity", update_placeholder_identity, 0x0, 0x0, false, 0x6003ea7f8166c1b5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CLOUD_COMMAND.CreateServiceIdentity.ServiceIdentity", service_identity, 0x0, 0x0, false, 0xf3c2dccbd17331ef)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLOUD_COMMAND.CreateServiceIdentity.Alignment", alignment, 0x0, 0x0, false, 0xa18a087b7f4f4f1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.CreateServiceIdentity.Length", length, 0x0, 0x0, false, 0xb0de2fe0967a1030)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.CreateServiceIdentity.Flags", flags, 0x0, 0x0, false, 0xd567fcaa0b06614)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_create_service_identity_t), "_CLOUD_COMMAND.CreateServiceIdentity", create_service_identity, 0x0, 0x0, false, 0x9f41eed50203a987)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CLOUD_COMMAND.ConnectServiceIdentity.ServiceIdentity", service_identity, 0x0, 0x0, false, 0x522698b68acf1ded)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLOUD_COMMAND.ConnectServiceIdentity.Alignment", alignment, 0x0, 0x0, false, 0x32ace35dc6647ec2)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.ConnectServiceIdentity.Length", length, 0x0, 0x0, false, 0x69d646b8cac9962e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.ConnectServiceIdentity.Flags", flags, 0x0, 0x0, false, 0x65fb4d3245e4ffc1)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_connect_service_identity_t), "_CLOUD_COMMAND.ConnectServiceIdentity", connect_service_identity, 0x0, 0x0, false, 0xd1a0d94c1f00b52b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CLOUD_COMMAND.DeleteServiceIdentity.ServiceIdentity", service_identity, 0x0, 0x0, false, 0xa1bda722c8005688)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLOUD_COMMAND.DeleteServiceIdentity.Alignment", alignment, 0x0, 0x0, false, 0xbae34ecc583e1fc3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.DeleteServiceIdentity.Length", length, 0x0, 0x0, false, 0x403df348d58fcaa2)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.DeleteServiceIdentity.Flags", flags, 0x0, 0x0, false, 0x20da10fe1f5037c)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_delete_service_identity_t), "_CLOUD_COMMAND.DeleteServiceIdentity", delete_service_identity, 0x0, 0x0, false, 0x142fb5332d03873b)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.PropertyOperation.FirstBlobContextOffset", first_blob_context_offset, 0x0, 0x0, false, 0x8357ae3495bebd19)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.PropertyOperation.BlobCount", blob_count, 0x0, 0x0, false, 0x9274ec08a289b2ad)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CLOUD_COMMAND.PropertyOperation.Timeout", timeout, 0x0, 0x0, false, 0xb99fa8221ef49e18)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLOUD_COMMAND.PropertyOperation.Flags", flags, 0x0, 0x0, false, 0xaa8b45f548465409)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_property_operation_t), "_CLOUD_COMMAND.PropertyOperation", property_operation, 0x0, 0x0, false, 0x5d26d8a7f0c4de86)
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
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#endif