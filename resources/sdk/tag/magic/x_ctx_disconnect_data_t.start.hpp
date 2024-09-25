#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "tagXCtxDisconnectData.pServer", p_server, 0x0, 0x40, true, 0x337a49e2fb1b5c83)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::cid_object_t*), "tagXCtxDisconnectData.pID", p_id, 0x40, 0x40, true, 0xf5fd31ed8178f0fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagXCtxDisconnectData.cIFaces", c_i_faces, 0x80, 0x20, true, 0x1e6440d5922bf076)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::i_face_svr_refs_t*), "tagXCtxDisconnectData.pIFaceSvrRefs", p_i_face_svr_refs, 0xc0, 0x40, true, 0x8341ccad7a911968)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif