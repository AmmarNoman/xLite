/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType15_3_va40ext_IEs_H_
#define	_SysInfoType15_3_va40ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_Positioning_GPS_Almanac_va40ext;

/* SysInfoType15-3-va40ext-IEs */
typedef struct SysInfoType15_3_va40ext_IEs {
	struct UE_Positioning_GPS_Almanac_va40ext	*ue_positioning_GPS_Almanac	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType15_3_va40ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType15_3_va40ext_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-Positioning-GPS-Almanac-va40ext.h"

#endif	/* _SysInfoType15_3_va40ext_IEs_H_ */
#include <asn_internal.h>