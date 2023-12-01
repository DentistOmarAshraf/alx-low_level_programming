#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "no1");
	hash_table_set(ht, "mentioner", "no2");
	hash_table_set(ht, "mentioner", "no3");
	return (EXIT_SUCCESS);
}
