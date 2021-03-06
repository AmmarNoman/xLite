/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_PICH_ForHSDPASupportedPaging_TDD128_H_
#define	_PICH_ForHSDPASupportedPaging_TDD128_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PICH-Info-LCR-r4.h"
#include "OccurrenceSequenceNumberOfPICH.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PICH_ForHSDPASupportedPaging_TDD128_PR {
	PICH_ForHSDPASupportedPaging_TDD128_PR_NOTHING,	/* No components present */
	PICH_ForHSDPASupportedPaging_TDD128_PR_implicit,
	PICH_ForHSDPASupportedPaging_TDD128_PR_explicit
} PICH_ForHSDPASupportedPaging_TDD128_PR;

/* PICH-ForHSDPASupportedPaging-TDD128 */
typedef struct PICH_ForHSDPASupportedPaging_TDD128 {
	PICH_ForHSDPASupportedPaging_TDD128_PR present;
	union PICH_ForHSDPASupportedPaging_TDD128_u {
		struct PICH_ForHSDPASupportedPaging_TDD128__implicit {
			OccurrenceSequenceNumberOfPICH_t	*occurrenceSequenceNumberOfPICH	/* OPTIONAL */;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} implicit;
		PICH_Info_LCR_r4_t	 Explicit;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PICH_ForHSDPASupportedPaging_TDD128_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PICH_ForHSDPASupportedPaging_TDD128;

#ifdef __cplusplus
}
#endif

#endif	/* _PICH_ForHSDPASupportedPaging_TDD128_H_ */
#include <asn_internal.h>
