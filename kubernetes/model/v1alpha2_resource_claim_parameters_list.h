/*
 * v1alpha2_resource_claim_parameters_list.h
 *
 * ResourceClaimParametersList is a collection of ResourceClaimParameters.
 */

#ifndef _v1alpha2_resource_claim_parameters_list_H_
#define _v1alpha2_resource_claim_parameters_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1alpha2_resource_claim_parameters_list_t v1alpha2_resource_claim_parameters_list_t;

#include "v1_list_meta.h"
#include "v1alpha2_resource_claim_parameters.h"



typedef struct v1alpha2_resource_claim_parameters_list_t {
    char *api_version; // string
    list_t *items; //nonprimitive container
    char *kind; // string
    struct v1_list_meta_t *metadata; //model

} v1alpha2_resource_claim_parameters_list_t;

v1alpha2_resource_claim_parameters_list_t *v1alpha2_resource_claim_parameters_list_create(
    char *api_version,
    list_t *items,
    char *kind,
    v1_list_meta_t *metadata
);

void v1alpha2_resource_claim_parameters_list_free(v1alpha2_resource_claim_parameters_list_t *v1alpha2_resource_claim_parameters_list);

v1alpha2_resource_claim_parameters_list_t *v1alpha2_resource_claim_parameters_list_parseFromJSON(cJSON *v1alpha2_resource_claim_parameters_listJSON);

cJSON *v1alpha2_resource_claim_parameters_list_convertToJSON(v1alpha2_resource_claim_parameters_list_t *v1alpha2_resource_claim_parameters_list);

#endif /* _v1alpha2_resource_claim_parameters_list_H_ */

