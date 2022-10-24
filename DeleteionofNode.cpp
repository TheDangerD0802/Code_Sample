void deleteNode(int Key, Node* head)
{
	Node* curr = head;
	Node* prev = NULL;

	while(curr->data!=Key)
	{
		prev = curr;
		curr=curr->next;
	}
	prev->next = curr->next;
	delete(curr);

}