#ifndef LIST_H
#define LIST_H

struct list {
	void* data;
	int elements, element_size, mem_size;
};

int list_created(struct list* l);
void list_create(struct list* l, int element_size);
void* list_get(struct list* l, int i);
void* list_add(struct list* l, void* e);
void list_remove(struct list* l, int i);
void list_clear(struct list* l);
int list_size(struct list* l);

#endif
