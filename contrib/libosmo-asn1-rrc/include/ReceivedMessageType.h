/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_ReceivedMessageType_H_
#define	_ReceivedMessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReceivedMessageType {
	ReceivedMessageType_activeSetUpdate	= 0,
	ReceivedMessageType_cellChangeOrderFromUTRAN	= 1,
	ReceivedMessageType_cellUpdateConfirm	= 2,
	ReceivedMessageType_counterCheck	= 3,
	ReceivedMessageType_downlinkDirectTransfer	= 4,
	ReceivedMessageType_interRATHandoverCommand	= 5,
	ReceivedMessageType_measurementControl	= 6,
	ReceivedMessageType_pagingType2	= 7,
	ReceivedMessageType_physicalChannelReconfiguration	= 8,
	ReceivedMessageType_physicalSharedChannelAllocation	= 9,
	ReceivedMessageType_radioBearerReconfiguration	= 10,
	ReceivedMessageType_radioBearerRelease	= 11,
	ReceivedMessageType_radioBearerSetup	= 12,
	ReceivedMessageType_rrcConnectionRelease	= 13,
	ReceivedMessageType_rrcConnectionReject	= 14,
	ReceivedMessageType_rrcConnectionSetup	= 15,
	ReceivedMessageType_securityModeCommand	= 16,
	ReceivedMessageType_signallingConnectionRelease	= 17,
	ReceivedMessageType_transportChannelReconfiguration	= 18,
	ReceivedMessageType_transportFormatCombinationControl	= 19,
	ReceivedMessageType_ueCapabilityEnquiry	= 20,
	ReceivedMessageType_ueCapabilityInformationConfirm	= 21,
	ReceivedMessageType_uplinkPhysicalChannelControl	= 22,
	ReceivedMessageType_uraUpdateConfirm	= 23,
	ReceivedMessageType_utranMobilityInformation	= 24,
	ReceivedMessageType_assistanceDataDelivery	= 25,
	ReceivedMessageType_spare6	= 26,
	ReceivedMessageType_spare5	= 27,
	ReceivedMessageType_spare4	= 28,
	ReceivedMessageType_spare3	= 29,
	ReceivedMessageType_spare2	= 30,
	ReceivedMessageType_spare1	= 31
} e_ReceivedMessageType;

/* ReceivedMessageType */
typedef long	 ReceivedMessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReceivedMessageType;
asn_struct_free_f ReceivedMessageType_free;
asn_struct_print_f ReceivedMessageType_print;
asn_constr_check_f ReceivedMessageType_constraint;
ber_type_decoder_f ReceivedMessageType_decode_ber;
der_type_encoder_f ReceivedMessageType_encode_der;
xer_type_decoder_f ReceivedMessageType_decode_xer;
xer_type_encoder_f ReceivedMessageType_encode_xer;
per_type_decoder_f ReceivedMessageType_decode_uper;
per_type_encoder_f ReceivedMessageType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReceivedMessageType_H_ */
#include <asn_internal.h>