char* infixtopostfix(char *infix)
// {
//     struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
//     sp->size = 100;
//     sp->top = -1;
//     sp->arr = (char *)malloc(sp->size * sizeof(char));
//     char *postfix = (char *)malloc((strlen(infix)+1)*sizeof(char));
//     int i = 0;
//     int j = 0;
//     while (infix[i] != '\0')
//     {
//         if (!isOperator(infix[i]))
//         {
//             postfix[j] = infix[i];
//             i++;
//             j++;
//         }
//         else
//         {
//             if (precedence(infix[i] > precedence(stackTop(sp))))
//             {
//                 push(sp, infix[i]);
//                 i++;
//             }
//             else
//             {
//                 postfix[j] = pop(sp);
//                 j++;
//             }
//         }
//     }
//     while (!isEmpty(sp))
//     {
//         postfix[j] = pop(sp);
//         j++;
//     }
//     postfix[j] = '\0';
//     return postfix;
// }