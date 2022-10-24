Node* reverseLL(Node *head)
{
	
	Node* curr = head;
	Node* prev = NULL;
	Node* next = head->next;
	while(curr!=NULL)
	{
		curr->next = prev;
		prev = curr;
		curr = next;
		if(next!=NULL)
		next = next->next;
	}
	return prev;
}