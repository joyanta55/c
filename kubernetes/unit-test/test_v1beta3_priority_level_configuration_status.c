#ifndef v1beta3_priority_level_configuration_status_TEST
#define v1beta3_priority_level_configuration_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1beta3_priority_level_configuration_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1beta3_priority_level_configuration_status.h"
v1beta3_priority_level_configuration_status_t* instantiate_v1beta3_priority_level_configuration_status(int include_optional);



v1beta3_priority_level_configuration_status_t* instantiate_v1beta3_priority_level_configuration_status(int include_optional) {
  v1beta3_priority_level_configuration_status_t* v1beta3_priority_level_configuration_status = NULL;
  if (include_optional) {
    v1beta3_priority_level_configuration_status = v1beta3_priority_level_configuration_status_create(
      list_createList()
    );
  } else {
    v1beta3_priority_level_configuration_status = v1beta3_priority_level_configuration_status_create(
      list_createList()
    );
  }

  return v1beta3_priority_level_configuration_status;
}


#ifdef v1beta3_priority_level_configuration_status_MAIN

void test_v1beta3_priority_level_configuration_status(int include_optional) {
    v1beta3_priority_level_configuration_status_t* v1beta3_priority_level_configuration_status_1 = instantiate_v1beta3_priority_level_configuration_status(include_optional);

	cJSON* jsonv1beta3_priority_level_configuration_status_1 = v1beta3_priority_level_configuration_status_convertToJSON(v1beta3_priority_level_configuration_status_1);
	printf("v1beta3_priority_level_configuration_status :\n%s\n", cJSON_Print(jsonv1beta3_priority_level_configuration_status_1));
	v1beta3_priority_level_configuration_status_t* v1beta3_priority_level_configuration_status_2 = v1beta3_priority_level_configuration_status_parseFromJSON(jsonv1beta3_priority_level_configuration_status_1);
	cJSON* jsonv1beta3_priority_level_configuration_status_2 = v1beta3_priority_level_configuration_status_convertToJSON(v1beta3_priority_level_configuration_status_2);
	printf("repeating v1beta3_priority_level_configuration_status:\n%s\n", cJSON_Print(jsonv1beta3_priority_level_configuration_status_2));
}

int main() {
  test_v1beta3_priority_level_configuration_status(1);
  test_v1beta3_priority_level_configuration_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1beta3_priority_level_configuration_status_MAIN
#endif // v1beta3_priority_level_configuration_status_TEST
