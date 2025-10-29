#include "push_swap.h"

t_list	*fill_new_node(int value)
{
	int		*content_ptr;
	t_list	*new_node;

	content_ptr = malloc(sizeof(int));
	if (!content_ptr)
		return (NULL);
	*content_ptr = value;
	new_node = ft_lstnew(content_ptr);
	if (!new_node)
	{
		free(content_ptr);
		return (NULL);
	}
	return (new_node);
}

t_list  *new_node(int value) // value = 42
{
    t_list  *node;
    int     *content_ptr;

    /* PASSO 1: Alocando memória para o INTEIRO (na Heap) */
    content_ptr = malloc(sizeof(int)); 
    /* A máquina reserva 4 bytes (ex: no endereço 0x1000)
       'content_ptr' agora contém o *endereço* 0x1000 */

    /* PASSO 2: Escrevendo o valor NO ENDEREÇO alocado */
    *content_ptr = value;
    /* "Vá para o endereço 0x1000 e escreva o valor 42 lá" */

    /* PASSO 3: Alocando memória para o NÓ (na Heap) */
    node = malloc(sizeof(t_list));
    /* A máquina reserva espaço para a struct (ex: no endereço 0x500)
       'node' agora contém o *endereço* 0x500 */

    /* PASSO 4: Armazenando o ENDEREÇO do inteiro dentro do nó */
    node->content = (void *)content_ptr;
    /* No campo 'node->content' (em 0x500), escreva o *endereço* 0x1000 */
    
    node->next = NULL;
    return (node);
}