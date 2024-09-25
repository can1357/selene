#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_TAGGED_OTHER_MSG.dwBodyPartID", dw_body_part_id, 0x0, 0x20, true, 0x23083358d376cb25)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_CMC_TAGGED_OTHER_MSG.pszObjId", psz_obj_id, 0x40, 0x40, true, 0x84c09080dcce359)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMC_TAGGED_OTHER_MSG.Value", value, 0x80, 0x80, true, 0x3d30be6ec88e21a3)
#else
#define _m00
#define _m01
#define _m02
#endif