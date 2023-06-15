/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_AMF_TNLAssociationToAddItem_H_
#define	_ASN_NGAP_AMF_TNLAssociationToAddItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_CPTransportLayerInformation.h"
#include "ASN_NGAP_TNLAssociationUsage.h"
#include "ASN_NGAP_TNLAddressWeightFactor.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_AMF-TNLAssociationToAddItem */
typedef struct ASN_NGAP_AMF_TNLAssociationToAddItem {
	ASN_NGAP_CPTransportLayerInformation_t	 aMF_TNLAssociationAddress;
	ASN_NGAP_TNLAssociationUsage_t	*tNLAssociationUsage;	/* OPTIONAL */
	ASN_NGAP_TNLAddressWeightFactor_t	 tNLAddressWeightFactor;
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_AMF_TNLAssociationToAddItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_AMF_TNLAssociationToAddItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_AMF_TNLAssociationToAddItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_AMF_TNLAssociationToAddItem_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_AMF_TNLAssociationToAddItem_H_ */
#include <asn_internal.h>
