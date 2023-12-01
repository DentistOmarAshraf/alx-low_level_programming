#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	int i;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "no1");
	hash_table_set(ht, "mentioner", "no2");
	i = hash_table_set(ht, "mentioner", "no3");
	printf("%d\n", i);
	i = hash_table_set(ht, "", "omar");
	printf("%d\n", i);
	return (EXIT_SUCCESS);
}
