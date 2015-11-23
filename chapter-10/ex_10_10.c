// Dictionary lookup program

#include <stdio.h>
#include <string.h>

struct entry
{
    char word[15];
    char definition[50];
};

int main (void)
{
    struct entry dictionary[100] =
    { { "aardvark", "a burrowing African mammal"        },
      { "acumen",   "mentally sharp; keen"              },
      { "aigrette", "an ornamental cluster of feathers" },
      { "addle",    "to become confused"                },
      { "aerie",    "a high nest"                       },
      { "agar",     "a jelly made from seaweek"         },
      { "ahoy",     "a nautical call of greeting"       },
      { "affix",    "to append; attach"                 },
      { "abyss",    "a bottomless pit"                  },
      { "ajar",     "partially opened"                  } };
    
    char    word[10];
    int     entries = 10;
    int     entry;
    struct entry temp;
                    
    printf ("Dictionary pre-sorting:\n");
    printf ("-----------------------\n");
    
    for (int i = 0; i < entries; i++)
        printf ("%s    %s\n", dictionary[i].word, dictionary[i].definition);
    
    for (int i = 0; i < entries; i++)
        for (int j = 0; j < entries; j++)
            if (strcmp(dictionary[i].word, dictionary[j].word) < 0)
            {
                temp = dictionary[j];
                dictionary[j] = dictionary[i];
                dictionary[i] = temp;
            }
            
    printf ("Dictionary after sorting:\n");
    printf ("-------------------------\n");
    
    for (int i = 0; i < entries; i++)
        printf ("%s    %s\n", dictionary[i].word, dictionary[i].definition);
    
    return 0;
}

