#include "Axel.h"

void Axel::overalldamage()
{
    damageperweap1 = 35;
    damageperweap2 = 40;

    // Clear the existing damage list
    Node* current = damageList;
    while (current != nullptr)
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    damageList = nullptr;

    // Add weapon 1 damage values to the linked list
    for (int i = 0; i < numberofweap1; i++)
    {
        Node* newNode = new Node(damageperweap1);
        newNode->next = damageList;
        damageList = newNode;
    }

    // Add weapon 2 damage values to the linked list
    for (int i = 0; i < numberofweap2; i++)
    {
        Node* newNode = new Node(damageperweap2);
        newNode->next = damageList;
        damageList = newNode;
    }

    // Calculate overall damage by traversing the linked list
    double damage = 0.0;
    current = damageList;
    while (current != nullptr)
    {
        damage += current->damage;
        current = current->next;
    }

    // Delete the linked list nodes
    current = damageList;
    while (current != nullptr)
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    damageList = nullptr;

    setPower(damage);
}
