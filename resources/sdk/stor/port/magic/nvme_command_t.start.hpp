#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_command_dword0_t), "NVME_COMMAND.CDW0", cdw0, 0x0, 0x0, false, 0x911d1f7612381a20)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.NSID", nsid, 0x0, 0x0, false, 0xd01c3fd08b5f7a64)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_COMMAND.MPTR", mptr, 0x0, 0x0, false, 0x388ef041724cab85)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_COMMAND.PRP1", prp1, 0x0, 0x0, false, 0xc864e63ac3c7b1b3)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_COMMAND.PRP2", prp2, 0x0, 0x0, false, 0x1cbac02e0673ee45)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_general_t), "NVME_COMMAND.GENERAL", general, 0x0, 0x0, false, 0xf33fe2ef9bf146d3)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_identify_t), "NVME_COMMAND.IDENTIFY", identify, 0x0, 0x0, false, 0x9252d97ab883f38)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_abort_t), "NVME_COMMAND.ABORT", abort, 0x0, 0x0, false, 0x2162fd4154ee27a)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_getfeatures_t), "NVME_COMMAND.GETFEATURES", getfeatures, 0x0, 0x0, false, 0xf9714d85dc8b7ba)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_setfeatures_t), "NVME_COMMAND.SETFEATURES", setfeatures, 0x0, 0x0, false, 0x71570a87f54095ee)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_getlogpage_t), "NVME_COMMAND.GETLOGPAGE", getlogpage, 0x0, 0x0, false, 0xbeaade69d8c35d2f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GENERAL.CDW10", cdw10, 0x0, 0x0, false, 0x331e5cf93a31c584)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_createiocq_t), "NVME_COMMAND.CREATEIOCQ", createiocq, 0x0, 0x0, false, 0x470456aa8ea5006a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GENERAL.CDW11", cdw11, 0x0, 0x0, false, 0xc06c9eb7678a3ac5)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_createiosq_t), "NVME_COMMAND.CREATEIOSQ", createiosq, 0x0, 0x0, false, 0xb2e0c38a2b8fc6e3)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_datasetmanagement_t), "NVME_COMMAND.DATASETMANAGEMENT", datasetmanagement, 0x0, 0x0, false, 0x9e35fc53ab5d1afd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GENERAL.CDW12", cdw12, 0x0, 0x0, false, 0x65b3b6e5ff255b49)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_securitysend_t), "NVME_COMMAND.SECURITYSEND", securitysend, 0x0, 0x0, false, 0xd75007e116a3087b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GENERAL.CDW13", cdw13, 0x0, 0x0, false, 0x72673a585291fc2)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_securityreceive_t), "NVME_COMMAND.SECURITYRECEIVE", securityreceive, 0x0, 0x0, false, 0x9580bc46ae9cd1da)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_firmwaredownload_t), "NVME_COMMAND.FIRMWAREDOWNLOAD", firmwaredownload, 0x0, 0x0, false, 0x5ffb63a426b24c2d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GENERAL.CDW14", cdw14, 0x0, 0x0, false, 0x3367033251aa92ad)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_firmwareactivate_t), "NVME_COMMAND.FIRMWAREACTIVATE", firmwareactivate, 0x0, 0x0, false, 0x46a2b15bb93225ae)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GENERAL.CDW15", cdw15, 0x0, 0x0, false, 0xf20cb925594d6a35)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u13_formatnvm_t), "NVME_COMMAND.FORMATNVM", formatnvm, 0x0, 0x0, false, 0x8b517ae97a8e13d2)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u14_directivereceive_t), "NVME_COMMAND.DIRECTIVERECEIVE", directivereceive, 0x0, 0x0, false, 0xdbc93e766cb0c963)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u15_directivesend_t), "NVME_COMMAND.DIRECTIVESEND", directivesend, 0x0, 0x0, false, 0x82357a6a2a92e2cc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_identify_t), "NVME_COMMAND.IDENTIFY.CDW10", cdw10, 0x0, 0x0, false, 0x7ff0a0869e2cbf8f)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_sanitize_t), "NVME_COMMAND.SANITIZE", sanitize, 0x0, 0x0, false, 0x97e5107f095b8ead)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_identify_t), "NVME_COMMAND.IDENTIFY.CDW11", cdw11, 0x0, 0x0, false, 0x8ea3e6194a0aff4c)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u17_readwrite_t), "NVME_COMMAND.READWRITE", readwrite, 0x0, 0x0, false, 0x9f96e7ee7cf836d7)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u18_reservationacquire_t), "NVME_COMMAND.RESERVATIONACQUIRE", reservationacquire, 0x0, 0x0, false, 0xbb9bd5ebb4499d66)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.IDENTIFY.CDW12", cdw12, 0x0, 0x0, false, 0xe3f4d8fba75c3506)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u19_reservationregister_t), "NVME_COMMAND.RESERVATIONREGISTER", reservationregister, 0x0, 0x0, false, 0x516eb28347564fdf)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.IDENTIFY.CDW13", cdw13, 0x0, 0x0, false, 0xff3b761235a7a1b)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_reservationrelease_t), "NVME_COMMAND.RESERVATIONRELEASE", reservationrelease, 0x0, 0x0, false, 0x6086df64f51661e0)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u21_reservationreport_t), "NVME_COMMAND.RESERVATIONREPORT", reservationreport, 0x0, 0x0, false, 0xdb9362c57e310453)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.IDENTIFY.CDW14", cdw14, 0x0, 0x0, false, 0x3158d9a5e93175dd)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u22_zonemanagementsend_t), "NVME_COMMAND.ZONEMANAGEMENTSEND", zonemanagementsend, 0x0, 0x0, false, 0x63e09ccb4fb3f163)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.IDENTIFY.CDW15", cdw15, 0x0, 0x0, false, 0x7052ffd9a0b7ee5d)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u23_zonemanagementreceive_t), "NVME_COMMAND.ZONEMANAGEMENTRECEIVE", zonemanagementreceive, 0x0, 0x0, false, 0x2a751aa211fbedef)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_zoneappend_t), "NVME_COMMAND.ZONEAPPEND", zoneappend, 0x0, 0x0, false, 0x78c0c8b5c7faa995)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_abort_t), "NVME_COMMAND.ABORT.CDW10", cdw10, 0x0, 0x0, false, 0x1a705f1e3c632f7e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ABORT.CDW11", cdw11, 0x0, 0x0, false, 0x4d8e610a545d0b18)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ABORT.CDW12", cdw12, 0x0, 0x0, false, 0x97f9945c25465eac)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ABORT.CDW13", cdw13, 0x0, 0x0, false, 0xdce92ffdb89bae10)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ABORT.CDW14", cdw14, 0x0, 0x0, false, 0x2bef42f2a89f1ce3)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ABORT.CDW15", cdw15, 0x0, 0x0, false, 0x6eb940c440c78de8)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_get_features_t), "NVME_COMMAND.GETFEATURES.CDW10", cdw10, 0x0, 0x0, false, 0xf0b07fb6c767160c)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_features_t), "NVME_COMMAND.GETFEATURES.CDW11", cdw11, 0x0, 0x0, false, 0xbb43523d817d37e3)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GETFEATURES.CDW12", cdw12, 0x0, 0x0, false, 0x1e569f5b72f5cd8d)
#define _m29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GETFEATURES.CDW13", cdw13, 0x0, 0x0, false, 0x7a1bd6a947d79b6e)
#define _m30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GETFEATURES.CDW14", cdw14, 0x0, 0x0, false, 0xcdf5eabdfb4825e)
#define _m31 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GETFEATURES.CDW15", cdw15, 0x0, 0x0, false, 0xe4638f524a4c4f6)
#define _m33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_set_features_t), "NVME_COMMAND.SETFEATURES.CDW10", cdw10, 0x0, 0x0, false, 0x7cde2a140e44ee5)
#define _m34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_features_t), "NVME_COMMAND.SETFEATURES.CDW11", cdw11, 0x0, 0x0, false, 0x9f822f15415d2970)
#define _m35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_features_t), "NVME_COMMAND.SETFEATURES.CDW12", cdw12, 0x0, 0x0, false, 0xa8d5ea349a920420)
#define _m36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw13_features_t), "NVME_COMMAND.SETFEATURES.CDW13", cdw13, 0x0, 0x0, false, 0xf9f41649c05e7c26)
#define _m37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw14_features_t), "NVME_COMMAND.SETFEATURES.CDW14", cdw14, 0x0, 0x0, false, 0x28aa2cf37fe54add)
#define _m38 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw15_features_t), "NVME_COMMAND.SETFEATURES.CDW15", cdw15, 0x0, 0x0, false, 0xa15ff7c75f98632c)
#define _m40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_get_log_page_t), "NVME_COMMAND.GETLOGPAGE.CDW10", cdw10, 0x0, 0x0, false, 0xd7c06457e81c9499)
#define _m41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_get_log_page_v13_t), "NVME_COMMAND.GETLOGPAGE.CDW10_V13", cdw10_v13, 0x0, 0x0, false, 0x2fb4c42074e037d7)
#define _m42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_get_log_page_t), "NVME_COMMAND.GETLOGPAGE.CDW11", cdw11, 0x0, 0x0, false, 0x485d2fd9e9c7548)
#define _m43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw12_get_log_page_t), "NVME_COMMAND.GETLOGPAGE.CDW12", cdw12, 0x0, 0x0, false, 0x54d399f085fd6017)
#define _m44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw13_get_log_page_t), "NVME_COMMAND.GETLOGPAGE.CDW13", cdw13, 0x0, 0x0, false, 0xe3c25bb73fc61f31)
#define _m45 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw14_get_log_page_t), "NVME_COMMAND.GETLOGPAGE.CDW14", cdw14, 0x0, 0x0, false, 0xe36c42339fd69db3)
#define _m46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.GETLOGPAGE.CDW15", cdw15, 0x0, 0x0, false, 0x8338ffaa7610e20b)
#define _m48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_create_io_queue_t), "NVME_COMMAND.CREATEIOCQ.CDW10", cdw10, 0x0, 0x0, false, 0xc790871216981711)
#define _m49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_create_io_cq_t), "NVME_COMMAND.CREATEIOCQ.CDW11", cdw11, 0x0, 0x0, false, 0x5d687d78c9985f3c)
#define _m50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOCQ.CDW12", cdw12, 0x0, 0x0, false, 0xa48c8a21e685a1ba)
#define _m51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOCQ.CDW13", cdw13, 0x0, 0x0, false, 0x5a59ad8c2d6e9568)
#define _m52 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOCQ.CDW14", cdw14, 0x0, 0x0, false, 0x5c9cfce977a77e7e)
#define _m53 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOCQ.CDW15", cdw15, 0x0, 0x0, false, 0x8d387af64b549068)
#define _m55 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_create_io_queue_t), "NVME_COMMAND.CREATEIOSQ.CDW10", cdw10, 0x0, 0x0, false, 0x9136141b2125cb30)
#define _m56 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_create_io_sq_t), "NVME_COMMAND.CREATEIOSQ.CDW11", cdw11, 0x0, 0x0, false, 0xcc75f13846a205a0)
#define _m57 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOSQ.CDW12", cdw12, 0x0, 0x0, false, 0x9fece8200ac3bad8)
#define _m58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOSQ.CDW13", cdw13, 0x0, 0x0, false, 0x66294690a8da1e28)
#define _m59 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOSQ.CDW14", cdw14, 0x0, 0x0, false, 0xe7831d301d3506d)
#define _m60 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.CREATEIOSQ.CDW15", cdw15, 0x0, 0x0, false, 0x1a4d0f3008ba87f5)
#define _m62 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_dataset_management_t), "NVME_COMMAND.DATASETMANAGEMENT.CDW10", cdw10, 0x0, 0x0, false, 0xff8d4c27f00fd460)
#define _m63 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_dataset_management_t), "NVME_COMMAND.DATASETMANAGEMENT.CDW11", cdw11, 0x0, 0x0, false, 0xe65591f8e908e9a8)
#define _m64 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DATASETMANAGEMENT.CDW12", cdw12, 0x0, 0x0, false, 0x7b6d0e048390ef42)
#define _m65 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DATASETMANAGEMENT.CDW13", cdw13, 0x0, 0x0, false, 0x25fe03331a4b0f2d)
#define _m66 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DATASETMANAGEMENT.CDW14", cdw14, 0x0, 0x0, false, 0x9a178ac1536639ea)
#define _m67 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DATASETMANAGEMENT.CDW15", cdw15, 0x0, 0x0, false, 0xf35105b6e5bfcd7)
#define _m69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_security_send_receive_t), "NVME_COMMAND.SECURITYSEND.CDW10", cdw10, 0x0, 0x0, false, 0xaf5eaab2008f3a61)
#define _m70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw11_security_send_t), "NVME_COMMAND.SECURITYSEND.CDW11", cdw11, 0x0, 0x0, false, 0x4a269e1aa7ece8ac)
#define _m71 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYSEND.CDW12", cdw12, 0x0, 0x0, false, 0x49dcbefe621ba5f3)
#define _m72 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYSEND.CDW13", cdw13, 0x0, 0x0, false, 0x6ddb96573a9b1bc9)
#define _m73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYSEND.CDW14", cdw14, 0x0, 0x0, false, 0xa35cf4e23939e530)
#define _m74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYSEND.CDW15", cdw15, 0x0, 0x0, false, 0x1d46970f6db70b2e)
#define _m76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_security_send_receive_t), "NVME_COMMAND.SECURITYRECEIVE.CDW10", cdw10, 0x0, 0x0, false, 0x247a28a17c4abb03)
#define _m77 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw11_security_receive_t), "NVME_COMMAND.SECURITYRECEIVE.CDW11", cdw11, 0x0, 0x0, false, 0xf5621e1609beef64)
#define _m78 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYRECEIVE.CDW12", cdw12, 0x0, 0x0, false, 0x1da9800e7ef83ff8)
#define _m79 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYRECEIVE.CDW13", cdw13, 0x0, 0x0, false, 0xc851e6a3e97a47a1)
#define _m80 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYRECEIVE.CDW14", cdw14, 0x0, 0x0, false, 0xfbd824bff35f4a9a)
#define _m81 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SECURITYRECEIVE.CDW15", cdw15, 0x0, 0x0, false, 0xb107b0d97db573b5)
#define _m83 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw10_firmware_download_t), "NVME_COMMAND.FIRMWAREDOWNLOAD.CDW10", cdw10, 0x0, 0x0, false, 0x3eea0731bd4d83d8)
#define _m84 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw11_firmware_download_t), "NVME_COMMAND.FIRMWAREDOWNLOAD.CDW11", cdw11, 0x0, 0x0, false, 0xdf19e9ca41c6d1e6)
#define _m85 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREDOWNLOAD.CDW12", cdw12, 0x0, 0x0, false, 0xc8529364d80dbfc4)
#define _m86 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREDOWNLOAD.CDW13", cdw13, 0x0, 0x0, false, 0xcbbb2a076e9ad694)
#define _m87 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREDOWNLOAD.CDW14", cdw14, 0x0, 0x0, false, 0xd413e5e85eec4047)
#define _m88 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREDOWNLOAD.CDW15", cdw15, 0x0, 0x0, false, 0xf5749cc6f462470)
#define _m90 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_firmware_activate_t), "NVME_COMMAND.FIRMWAREACTIVATE.CDW10", cdw10, 0x0, 0x0, false, 0xfc5d37780005778f)
#define _m91 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREACTIVATE.CDW11", cdw11, 0x0, 0x0, false, 0x98634733cb8c9b6b)
#define _m92 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREACTIVATE.CDW12", cdw12, 0x0, 0x0, false, 0xa9d07efe9d4374f3)
#define _m93 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREACTIVATE.CDW13", cdw13, 0x0, 0x0, false, 0xf67c7a77bcccab98)
#define _m94 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREACTIVATE.CDW14", cdw14, 0x0, 0x0, false, 0xeb93bce9de7984d1)
#define _m95 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FIRMWAREACTIVATE.CDW15", cdw15, 0x0, 0x0, false, 0xa9e59098cdc6a50a)
#define _m97 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_format_nvm_t), "NVME_COMMAND.FORMATNVM.CDW10", cdw10, 0x0, 0x0, false, 0xef49053776bd932e)
#define _m98 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FORMATNVM.CDW11", cdw11, 0x0, 0x0, false, 0x6e2316945f552119)
#define _m99 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FORMATNVM.CDW12", cdw12, 0x0, 0x0, false, 0x24e7a8a9ea7e64aa)
#define _n00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FORMATNVM.CDW13", cdw13, 0x0, 0x0, false, 0xc4678f40c0133e7d)
#define _n01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FORMATNVM.CDW14", cdw14, 0x0, 0x0, false, 0x8e1dc542d95e6d62)
#define _n02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.FORMATNVM.CDW15", cdw15, 0x0, 0x0, false, 0xacc54a756a34f44c)
#define _n04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw10_directive_receive_t), "NVME_COMMAND.DIRECTIVERECEIVE.CDW10", cdw10, 0x0, 0x0, false, 0x224bfe94334b720e)
#define _n05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_directive_receive_t), "NVME_COMMAND.DIRECTIVERECEIVE.CDW11", cdw11, 0x0, 0x0, false, 0x598c5493ac970d3e)
#define _n06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_directive_receive_t), "NVME_COMMAND.DIRECTIVERECEIVE.CDW12", cdw12, 0x0, 0x0, false, 0xe5f4568270733df9)
#define _n07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DIRECTIVERECEIVE.CDW13", cdw13, 0x0, 0x0, false, 0x7928e6ef10275877)
#define _n08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DIRECTIVERECEIVE.CDW14", cdw14, 0x0, 0x0, false, 0x595bd6584626fb59)
#define _n09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DIRECTIVERECEIVE.CDW15", cdw15, 0x0, 0x0, false, 0x463fb36783a5cbd1)
#define _n11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw10_directive_send_t), "NVME_COMMAND.DIRECTIVESEND.CDW10", cdw10, 0x0, 0x0, false, 0xfe9f1f0e28e91829)
#define _n12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_directive_send_t), "NVME_COMMAND.DIRECTIVESEND.CDW11", cdw11, 0x0, 0x0, false, 0x7d1e59dd2cec8fe1)
#define _n13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_directive_send_t), "NVME_COMMAND.DIRECTIVESEND.CDW12", cdw12, 0x0, 0x0, false, 0x4fb4967ee90eed38)
#define _n14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DIRECTIVESEND.CDW13", cdw13, 0x0, 0x0, false, 0xdce00c98a6f66526)
#define _n15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DIRECTIVESEND.CDW14", cdw14, 0x0, 0x0, false, 0xbfa2f5769a519cba)
#define _n16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.DIRECTIVESEND.CDW15", cdw15, 0x0, 0x0, false, 0xc5c1fbfb244f78b0)
#define _n18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_sanitize_t), "NVME_COMMAND.SANITIZE.CDW10", cdw10, 0x0, 0x0, false, 0x58c52b19703d6eee)
#define _n19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_sanitize_t), "NVME_COMMAND.SANITIZE.CDW11", cdw11, 0x0, 0x0, false, 0x216b383ef1a41ecc)
#define _n20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SANITIZE.CDW12", cdw12, 0x0, 0x0, false, 0xaae4c4492fb04ba5)
#define _n21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SANITIZE.CDW13", cdw13, 0x0, 0x0, false, 0x4c26437d2b9978d6)
#define _n22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SANITIZE.CDW14", cdw14, 0x0, 0x0, false, 0x55a2dcf1c3413bb8)
#define _n23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.SANITIZE.CDW15", cdw15, 0x0, 0x0, false, 0x35ee21973b42b1d)
#define _n25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.READWRITE.LBALOW", lbalow, 0x0, 0x0, false, 0x6edd744d030a4725)
#define _n26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.READWRITE.LBAHIGH", lbahigh, 0x0, 0x0, false, 0x9c8efb56912851ce)
#define _n27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_read_write_t), "NVME_COMMAND.READWRITE.CDW12", cdw12, 0x0, 0x0, false, 0x7fed33f74099e5a5)
#define _n28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw13_read_write_t), "NVME_COMMAND.READWRITE.CDW13", cdw13, 0x0, 0x0, false, 0x6941fc9366e67547)
#define _n29 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.READWRITE.CDW14", cdw14, 0x0, 0x0, false, 0x3e4326278624c1d3)
#define _n30 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw15_read_write_t), "NVME_COMMAND.READWRITE.CDW15", cdw15, 0x0, 0x0, false, 0xfcd323f46e4ac6d)
#define _n32 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_reservation_acquire_t), "NVME_COMMAND.RESERVATIONACQUIRE.CDW10", cdw10, 0x0, 0x0, false, 0x48d644c11186590f)
#define _n33 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONACQUIRE.CDW11", cdw11, 0x0, 0x0, false, 0xfa35cd906e2abb6f)
#define _n34 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONACQUIRE.CDW12", cdw12, 0x0, 0x0, false, 0x23f8b0deb52f5641)
#define _n35 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONACQUIRE.CDW13", cdw13, 0x0, 0x0, false, 0x923cdc5b74837676)
#define _n36 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONACQUIRE.CDW14", cdw14, 0x0, 0x0, false, 0xbe67c7d37a31975c)
#define _n37 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONACQUIRE.CDW15", cdw15, 0x0, 0x0, false, 0xb7d59ae8930bb221)
#define _n39 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_reservation_register_t), "NVME_COMMAND.RESERVATIONREGISTER.CDW10", cdw10, 0x0, 0x0, false, 0x51831d2aa6ed9b50)
#define _n40 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREGISTER.CDW11", cdw11, 0x0, 0x0, false, 0xc5afb109d4f4caea)
#define _n41 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREGISTER.CDW12", cdw12, 0x0, 0x0, false, 0x4a3532b76dedfd90)
#define _n42 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREGISTER.CDW13", cdw13, 0x0, 0x0, false, 0x9f037f48a90605bf)
#define _n43 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREGISTER.CDW14", cdw14, 0x0, 0x0, false, 0xb717a3e9e4393baf)
#define _n44 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREGISTER.CDW15", cdw15, 0x0, 0x0, false, 0x11a7b5516f12f43)
#define _n46 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_reservation_release_t), "NVME_COMMAND.RESERVATIONRELEASE.CDW10", cdw10, 0x0, 0x0, false, 0x6f0dc22b5ce26ee0)
#define _n47 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONRELEASE.CDW11", cdw11, 0x0, 0x0, false, 0xc91c402551c54450)
#define _n48 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONRELEASE.CDW12", cdw12, 0x0, 0x0, false, 0x43c7af86777337cb)
#define _n49 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONRELEASE.CDW13", cdw13, 0x0, 0x0, false, 0x2dcd43e9da0bf5ce)
#define _n50 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONRELEASE.CDW14", cdw14, 0x0, 0x0, false, 0x2c792654b0fc528a)
#define _n51 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONRELEASE.CDW15", cdw15, 0x0, 0x0, false, 0xb78d29497014a9a6)
#define _n53 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw10_reservation_report_t), "NVME_COMMAND.RESERVATIONREPORT.CDW10", cdw10, 0x0, 0x0, false, 0x24f8b08578be31cd)
#define _n54 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw11_reservation_report_t), "NVME_COMMAND.RESERVATIONREPORT.CDW11", cdw11, 0x0, 0x0, false, 0xb3be74ffdb04e12b)
#define _n55 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREPORT.CDW12", cdw12, 0x0, 0x0, false, 0x6f15c10de595407a)
#define _n56 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREPORT.CDW13", cdw13, 0x0, 0x0, false, 0x78766231f1f69d29)
#define _n57 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREPORT.CDW14", cdw14, 0x0, 0x0, false, 0xac904b7f713e6b1e)
#define _n58 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.RESERVATIONREPORT.CDW15", cdw15, 0x0, 0x0, false, 0xc6dbb4b845e1a0c7)
#define _n60 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw10_zone_management_send_t), "NVME_COMMAND.ZONEMANAGEMENTSEND.CDW1011", cdw1011, 0x0, 0x0, false, 0x34e44665e0463339)
#define _n61 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEMANAGEMENTSEND.CDW12", cdw12, 0x0, 0x0, false, 0x5196fd32b1d0aad1)
#define _n62 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw13_zone_management_send_t), "NVME_COMMAND.ZONEMANAGEMENTSEND.CDW13", cdw13, 0x0, 0x0, false, 0xbce21e1815109724)
#define _n63 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEMANAGEMENTSEND.CDW14", cdw14, 0x0, 0x0, false, 0x4f1c823413b1b32a)
#define _n64 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEMANAGEMENTSEND.CDW15", cdw15, 0x0, 0x0, false, 0xa0890c1cc55e7486)
#define _n66 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw10_zone_management_receive_t), "NVME_COMMAND.ZONEMANAGEMENTRECEIVE.CDW1011", cdw1011, 0x0, 0x0, false, 0x86b8fdef64880178)
#define _n67 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEMANAGEMENTRECEIVE.DWORDCOUNT", dwordcount, 0x0, 0x0, false, 0x88224dde3404399f)
#define _n68 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw13_zone_management_receive_t), "NVME_COMMAND.ZONEMANAGEMENTRECEIVE.CDW13", cdw13, 0x0, 0x0, false, 0x98e509290f6d63a2)
#define _n69 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEMANAGEMENTRECEIVE.CDW14", cdw14, 0x0, 0x0, false, 0x5e75ce456f604657)
#define _n70 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEMANAGEMENTRECEIVE.CDW15", cdw15, 0x0, 0x0, false, 0xa2e61779ad5028a4)
#define _n72 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::nvme_cdw10_zone_append_t), "NVME_COMMAND.ZONEAPPEND.CDW1011", cdw1011, 0x0, 0x0, false, 0x20f54547e879d096)
#define _n73 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw12_zone_append_t), "NVME_COMMAND.ZONEAPPEND.CDW12", cdw12, 0x0, 0x0, false, 0x5b0f82df5c1cb262)
#define _n74 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEAPPEND.CDW13", cdw13, 0x0, 0x0, false, 0xab3c22af12308b43)
#define _n75 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMMAND.ZONEAPPEND.ILBRT", ilbrt, 0x0, 0x0, false, 0x44fbbeb07bf7e411)
#define _n76 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvme_cdw15_zone_append_t), "NVME_COMMAND.ZONEAPPEND.CDW15", cdw15, 0x0, 0x0, false, 0xd35cfeceaaec1e65)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m011
#define _m018
#define _m025
#define _m032
#define _m039
#define _m047
#define _m05
#define _m054
#define _m06
#define _m061
#define _m068
#define _m07
#define _m075
#define _m08
#define _m082
#define _m089
#define _m09
#define _m096
#define _m10
#define _m103
#define _m110
#define _m117
#define _m12
#define _m124
#define _m13
#define _m131
#define _m138
#define _m14
#define _m145
#define _m15
#define _m152
#define _m159
#define _m16
#define _m165
#define _m17
#define _m171
#define _m177
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m55
#define _m56
#define _m57
#define _m58
#define _m59
#define _m60
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m69
#define _m70
#define _m71
#define _m72
#define _m73
#define _m74
#define _m76
#define _m77
#define _m78
#define _m79
#define _m80
#define _m81
#define _m83
#define _m84
#define _m85
#define _m86
#define _m87
#define _m88
#define _m90
#define _m91
#define _m92
#define _m93
#define _m94
#define _m95
#define _m97
#define _m98
#define _m99
#define _n00
#define _n01
#define _n02
#define _n04
#define _n05
#define _n06
#define _n07
#define _n08
#define _n09
#define _n11
#define _n12
#define _n13
#define _n14
#define _n15
#define _n16
#define _n18
#define _n19
#define _n20
#define _n21
#define _n22
#define _n23
#define _n25
#define _n26
#define _n27
#define _n28
#define _n29
#define _n30
#define _n32
#define _n33
#define _n34
#define _n35
#define _n36
#define _n37
#define _n39
#define _n40
#define _n41
#define _n42
#define _n43
#define _n44
#define _n46
#define _n47
#define _n48
#define _n49
#define _n50
#define _n51
#define _n53
#define _n54
#define _n55
#define _n56
#define _n57
#define _n58
#define _n60
#define _n61
#define _n62
#define _n63
#define _n64
#define _n66
#define _n67
#define _n68
#define _n69
#define _n70
#define _n72
#define _n73
#define _n74
#define _n75
#define _n76
#endif