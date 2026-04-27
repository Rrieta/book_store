#include <iostream>
#include <string>
#include <iomanip>
#include <chrono>
using namespace std;

auto now = chrono::system_clock::now();
time_t currentTime = chrono::system_clock::to_time_t(now);

string List_Of_All_Books[2][4][5] = {
     {
          {
               "DON\'T LET THE PIGEON DRIVE THE SLEIGH!","CHRISTMAS AT HOGWARTS", "MS. RACHEL AND THE SPECIAL SURPRISE",
               "BLUEY: BARTLEBEE\'S FIRST CHRISTMAS", "BLUEY: SLEEPYTIME"
          },
          {
               "Everybody Poops","Finders Keepers","Frederico and the Wolf","Fussy Flamingo","It\'s All About Me-Ow"
          },
          {
               "Simple & Big Coloring Book", "The Creative Toddler's First Coloring Book", "My First Learn-to-Write Workbook",
               "Mermaid Coloring Book", "Different Types Of Dogs: Coloring Book"
          },
          {
               "Brown Bear, Brown Bear, What Do You See?","I love you like no otter","The Going To Bed Book",
               "See You Later, Alligator", "Walt Disney\'s Peter Pan"
          }
     },
     {
          {
               "The Deal","Hate Notes","People We Meet on Vacation","Twisted Love","People We Meet on Vacation 2"
          },

          {
               "Still Life","The Grey Wolf","The Beautiful Mystery","Mona Lisa\'s Secret","None of This Is True"
          },

          {
               "The Rose Code","The Nightingale","The Alice Network","Our Woman in Moscow","An Instance of the Fingerpost"
          },

          {
               "The Terminal List","The Housemaid","The Silent Patient","The Housemaids Secret","The Girl Who Was Taken"
          },

     }
};

string List_Of_All_Books_Synopsis[2][4][5] {
     {
          {
               "It\'s the most wonderful time of the year-for driving a sleigh! \'Tis also the season-for driving a sleigh! Oh, and joy to the-driving a sleigh! The Pigeon has made a list and checked it once. Can his holiday dream come true? Or will The Pigeon be left out in the cold?",
               "So begins Chapter Twelve of Harry Potter and the Sorcerer\'s Stone, and the heartwarming story of Harry Potter\'s first Christmas at Hogwarts. From the Great Hall decked with magnificent fir trees to cozy evenings in the Gryffindor Common Room to the joy of presents on Christmas morning, it\'s a holiday filled with warmth, friendship, good food, and magical surprises that Harry will never forget.",
               "Using educational techniques from her beloved YouTube channel and threading them into an interactive story, Ms. Rachel shows kids and parents alike fun ways to engage and play!",
               "Bartlebee is Bluey\'s special Christmas present, and he will be joining the Heeler family in their annual Christmas Swim! But Bluey is worried they\'re playing a little rough with him. Will Bartlebee have fun on his first holiday with the Heelers? Read along to find out!",
               "It\'s sleepytime at the Heeler house! Bingo wants to do a Big Girl sleep. As she drifts away into a dreamy adventure with Flopsy, will Bingo make it through the night and wake up in her own bed?"
          },
          {
               "The book presents a straightforward and humorous narrative that explains how all animals, including humans, poop. It features various animals, from elephants to mice, illustrating that while the size and shape of poop may vary, the act itself is universal.",
               "Two dogs named Nap and Winkle find one bone and have difficulty deciding which of them owns it. Nap and Winkle begin to ask people who the bone belongs to. They ask a farmer, a goat, and a haircutter. A big dog takes the bone from both Nap and Winkle. After, getting the bone back from the big dog, Nap and Winkle discover that the bone belongs to both of them.",
               "With his red hoodie on and his bicycle basket full of food, Federico is ready to visit Abuelo. But on the way, he meets a hungry wolf. And now his grandfather bears a striking resemblance to el lobo... Fortunately, Federico is quick and clever-and just happens to be carrying a spicy surprise! Federico drives the wolf away, and he and Abuelo celebrate with a special salsa. Recipe included.",
               "Meet Lola, the \"no, no\" flamingo. Lola will NOT eat shrimp, thank you very much. She does NOT care that it will turn her feathers pink. It is just plain yucky. But each time Lola sneaks a different food, she changes colors! This funny visual tale will delight even the pickiest of young readers and resonate with parents eager to see their kids try just one bite. This repetitive and charming tale is a good story time pick, and it's also great for toddlers, preschoolers and early readers who may be fussy about certain foods!",
               "Cats rule! And this funny, endearing look at cat culture shows how they've mastered the art of charming humans. Do you ever wonder how cats achieve the perfect blend of catitude and cuteness; how they can be both mild and wild? Here all the tricks of their trade are revealed as an alpha cat passes his wisdom to a new generation. Entertaining lessons abound, including a crash course on what to eat (mouse=do, gerbil=don\'t) and the importance of purr therapy to keep the humans calm."
          },
          {
               "Looking for the perfect first coloring book for your little one? \"Simple and Big Coloring Book for Kids Ages 1-4\" is designed especially for toddlers, preschoolers, and kindergarten kids, making coloring fun and frustration-free!",
               "Let your toddler have creative fun while learning to recognize everyday things and animals! With 100 simple & familiar pictures (of everyday objects, fruits and vegetables, forest animals, farm animals, zoo animals and more!) this coloring book is perfect for toddlers from 1 year old!",
               "Set kids up to succeed in school with a learn to write for kids guide that offers letter, shape, and number practice for kindergarten―and beyond. My First Learn-to-Write Workbook introduces early writers to proper pen control, line tracing, and more with dozens of handwriting exercises that engage their minds and boost their reading and writing comprehension.",
               "If yes then this is the coloring book is for you as this enchanting kids coloring book is packed with unique magical mermaids, cute unicorns, fairy tale castles, rainbows, and more! Perfect for kids ages 4, 5, 6, 7, and 8, this coloring book is sure to provide hours of creativity and screen-free fun.",
               "Get ready to explore the wonderful world of dogs in this fun dog coloring book! Packed with 45 different dog breeds, this playful book is perfect for young animal lovers and dog fans of all ages!"
          },
          {
               "Is a repetitive and rhythmic children\'s book where various animals reveal what they see,culminating in a classroom of children.",
               "There\'s no better way to say \"I love you\" than with a sweet and heartfelt animal pun book!I Love You Like No Otter combines a warm message of love with beautifully illustrated animals families will love to read and share together. From baby shower gifts for new parents to bedtime read alouds all year long, this adorable board book is purrfect for anyone you love beary much!",
               "This classic bedtime story is just right for winding down the day as a joyful,silly group of animals scrub scrub scrub in the tub, brush and brush and brush their teeth, and finally rock and rock and rock to sleep.",
               "A departing tortoise has his bags packed and is almost ready to set out on an adventure, but he can\'t leave until he says good-bye to each of his animal friends. The tortoise stops for every last timid mouse and bumblebee, shouting his rhyming good-byes, making you wonder if, perhaps, he\'s stalling the start of his trip.",
               "Peter Pan and his fairy friend Tinker Bell are back in this vintage Little Golden Book! Featuring gorgeous illustrations from 1952, this children\'s classic is being reissued just in time for the release of Walt Disney\'s Peter Pan Platinum Edition DVD."
          }
     },
     {
               {
                    "She's about to make a deal with the college bad boy... Hannah Wells has finally found someone who turns her on. But while she might be confident in every other area of her life, she\'s carting around a full set of baggage when it comes to sex and seduction. If she wants to get her crush\'s attention, she\'ll have to step out of her comfort zone and make him take notice...even if it means tutoring the annoying, childish, cocky captain of the hockey team in exchange for a pretend date. ...and it\'s going to be oh so good!",
                    "From New York Times bestselling authors Vi Keeland and Penelope Ward comes an unexpected love story of secondhand hearts and second chance...",
                    "Poppy and Alex. Alex and Poppy. They have nothing in common. She\'s a wild child; he wears khakis. She has insatiable wanderlust; he prefers to stay home with a book. And somehow, ever since a fateful car share home from college many years ago, they are the very best of friends. For most of the year they live far apart-she\'s in New York City andhe\'s in their small hometown-but every summer for a decade, they have taken one glorious week of vacation together.",
                    "From New York Times bestselling author and BookTok sensation Ana Huang omes a billionaire brother's best friend romance!",
                    "Poppy and Alex. Alex and Poppy. They have nothing in common. She\'s a wild child; he wears khakis. She has insatiable wanderlust; he prefers to stay home with a book. And somehow, ever since a fateful car share home from college many years ago, they are the very best of friends. For most of the year they live far apart-she\'s in New York City and he\'s in their small hometown-but every summer for a decade, they have taken one glorious week of vacation together."
               },
               {
                    "As Allied troops advance and bombs fall around deserted villages, a young English soldier, Ulysses Temper, finds himself in the wine cellar of a deserted villa. There, he has a chance encounter with Evelyn Skinner, a middle-aged art historian who has come to Italy to salvage paintings from the ruins and recall long-forgotten memories of her own youth. In each other, Ulysses and Evelyn find a kindred spirit amongst the rubble of war-torn Italy, and set off on a course of events that will shape Ulysses\'s life for the next four decades.",
                    "Relentless phone calls interrupt the peace of a warm August morning in Three Pines. Though the tiny Quebec village is impossible to find on any map, someone has managed to track down Armand Gamache, head of homicide at the Surete, as he sits with his wife in their back garden. Reine-Marie watches with increasing unease as her husband refuses to pick up, though he clearly knows who is on the other end. When he finally answers, his rage shatters the calm of their quiet Sunday morning.",
                    "Louise Penny\'s \"The Beautiful Mystery\" plunges readers into the haunting world of Saint-Gilbert-Entre-les-Loups monastery, where Chief Inspector Gamache must solve a murder that threatens centuries of sacred tradition. This eighth installment in the beloved Three Pines series masterfully weaves together Gregorian chant, monastic life,and psychological suspense as Gamache and Jean-Guy Beauvoir investigate the killing of the monastery\'s choirmaster. ",
                    "Joey is the great-grandson of Vincenzo Peruggia, the man who stole the original Mona Lisa in 1911. Along with his girlfriend, Marie, an art connoisseur, he stumbles across his father\'s secret room, and finds himself staring at what he thinks is a replica of da Vinci\'s most famous masterpiece.",
                    "Celebrating her forty-fifth birthday at her local pub, popular podcaster Alix Summers crosses paths with an unassuming woman called Josie Fair. Josie, it turns out, is also celebrating her forty-fifth birthday. They are, in fact, birthday twins."
               },
               {
                    "A beautiful blue-blooded debutante, a tart-tongued London shop-girl, and a shy crossword-solving spinster join the war against Nazi Germany as codebreakers of Bletchley Park, only to find that the real puzzle lies inside the Park itself as a traitor sets them against each other in a betrayal reaching past the end of the war.",
                    "Through their diverging paths-one of quiet endurance, the other of fiery rebellion-The Nightingale explores the untold stories of women in wartime: their sacrifices, resilience, and unyielding spirit. It\'s a tribute to love, survival, and the power of hope in humanity\'s darkest hours.",
                    "Their lives collide in a quest for truth, redemption, and justice, uncovering secrets of espionage, betrayal, and the courage of women who risked everything to fight tyranny",
                    "Set against the backdrop of Stalinist Russia, the novel explores loyalty, love, and the high-stakes world of espionage through the lens of women navigating danger and deception.",
                    "Set in 17th-century Oxford, just after the English Civil War and during the Restoration of Charles II, the novel revolves around the mysterious death of Robert Grove, a fellow at New College. The story is told through the conflictingn memoirs of four unreliable narrators-each with their own motives and secrets."
               },
               {
                    " Navy SEAL James Reece loses his team and family in a conspiracy. Diagnosed with a brain tumor, he uncovers government betrayal and launches a lethal mission of revenge. A gritty, action-packed thriller of justice and vengeance.",
                    " Millie Calloway, a woman with a troubled past, lands a job as a live-in maid for the wealthy Winchester family. At first, the job seems like a lifeline-but the attic room locks from the outside, the glamorous Nina Winchester behaves erratically, and her husband Andrew seems too perfect. As Millie gets drawn into the household\'s twisted dynamics, she uncovers dark secrets and realizes she may be the next victim in a cycle of manipulation and abuse.",
                    " Alicia Berenson, a famous painter, shoots her husband in the face-and never speaks another word. Her silence turns the case into a media sensation. Enter Theo Faber, a criminal psychotherapist obsessed with uncovering the truth. As he digs into Alicia\'s past and tries to break her silence, he discovers disturbing secrets that challenge everything he thought he knew.",
                    " Millie is back, trying to rebuild her life and find stable work. She lands a new housekeeping job with the Garrick family-where the wife, Wendy, never leaves her bedroom and the husband, Douglas, is cold and controlling. Millie suspects something sinister is happening behind closed doors. As she digs deeper, she uncovers chilling secrets and faces a dangerous choice: stay silent or risk everything to expose the truth.",
                    " Two girls vanish from a beach town—only one returns. Nicole Cutty, a rebellious teenager, disappears without a trace. Megan McDonald, a straight-A student, escapes and becomes a media sensation. A year later, Nicole\'s sister Livia, a medical examiner in training, discovers a body that may be linked to Nicole\'s case. As she digs deeper, Livia uncovers disturbing truths about Megan\'s story and the secrets that bind the two girls."
               }
     }
};

string Authors_Name[2][4][5] {
     {
          {
               "Mo William","J. K. Rowling","Ms. Rachel","Joe Brumm","Joe Brumm"
          },
          {
               "Taro Gomi","William Lipkind","Rebecca J. Gomez","Shelly Vaughan","Hudson Talbott"
          },
          {
               "Lexie Hart","Imagi Press","Crystal Radke","Justin G. Boyce","Lizor Publishing"
          },
          {
               "Bill Martin Jr.","Rose Rossner","Sandra Boynton","Sally Hopgood","RH Disney"
          }
     },
     {
               {
                    "Elle Kennedy","Vi Keeland","Emily Henry","Ana Huang","Emily Henry"
               },
               {
                    "Sarah Winman","Kindle Edition","Louise Penny","Phil Philips","Lisa Jewell"
               },
               {
                    "Kate Quinn","Kristin Hannah","Kate Quinn","Beatriz Williams","Iain Pears"
               },
               {
                    " Jack Carr","Freida McFadden","Alex Michaelides","Freida McFadden","Charlie Donlea "
               }
     }
};

     int Units[2][4][5] = {
               {
                    {
                        30, 28, 39, 40, 10
                    },
                    {
                        14, 12, 9, 15, 32
                    },
                    {
                        21, 51, 11, 22, 5
                    },
                    {
                        31, 6, 11, 32, 13
                    }
               },
          {
               {
                   12, 41, 32, 14, 10
               },
               {
                   19, 8, 15, 4, 13
               },
               {
                   14, 16, 18, 25, 29
               },
               {
                   16, 17, 25, 11, 21
               }
          }
     };

     double Prices[2][4][5] = {
               {
                    {
                        29, 29, 39, 29, 49
                    },
                    {
                        39, 39, 49, 19, 29
                    },
                    {
                        19, 29, 39, 59, 29
                    },
                    {
                        29, 59, 49, 39, 49
                    }
               },
          {
               {
                   89, 99, 119, 79, 99
               },
               {
                   109, 89, 129, 99, 139
               },
               {
                   139, 109, 99, 99, 99
               },
               {
                   89, 99, 109, 139, 89
               }
          }
     };

     long long int BarCode[2][4][5] = {
          {

               {
                    1110081125011, 1120081125022, 1130081125033, 1140081125044, 1150081125055
               },
               {
                    1210081125011, 1220081125022, 1230081125033, 1240081125044, 1250081125055
               },
               {
                    1310081125011, 1320081125022, 1330081125033, 1340081125044, 1350081125055
               },
               {
                    1410081125011, 1420081125022, 1430081125033, 1440081125044, 1450081125055
               }
          },
          {
               {
                    2110081125011, 2120081125022, 2130081125033, 2140081125044, 2150081125055
               },
               {
                    2210081125011, 2210081125022, 2210081125033, 2210081125044, 2210081125055
               },
               {
                    2310081125011, 2310081125022, 2310081125033, 2310081125044, 2310081125055
               },
               {
                    2410081125011, 2410081125022, 2410081125033, 2410081125044, 2410081125055
               }
          }
     };


int Select, Sell, Add_Stock_To_Books, Admin_Selection, Admin_Child_Books_Units,Admin_Adult_Books_Units,
    Cart_Max_Load = 30, Cart_Load = 0, Cart_Load_Indicator = 0,
    List_Of_Books_For_Children_And_Adult_Selection, List_Of_Adult_Books,List_Of_Children_Books,
    Select_Book_In_Children_Section, Select_Book_In_Adult_Section;

string Receipt_Book[30];
string Receipt_Author[30];
int Receipt_Bought[30];
double Receipt_Price[30];
double Receipt_Total_Price[30];
double Sub_Total, Receipt_Total_Bought = 0, Payment, Change;

double VAT;

char payment;
long long int reference = 18320001;
long long int TransactionNumber = 26178001;

long long int Receipt_BarCode[30];

char Buy, Buy_Again, Add_Stock, Cart_Select;
int lineWidth = 50;

void printFormattedParagraph(const string& paragraph, int lineWidth);
void Admin(); //Admin Station
void Low_On_Stock_Books();
void List_Of_Stocks_Books (); //Kung may available pa ba na stock ng books
void List_Of_Children_Books_Admin();
void Child_Picture_Books_Stock();
void Child_Funny_Books_Stock();
void Child_Coloring_Books_Stock();
void Child_Story_Books_Stock();
void List_Of_Adults_Books_Admin();
void Adults_Romance_Books_Stock();
void Adults_Mystery_Books_Stock();
void Adults_Historical_Books_Stock();
void Adults_Thriller_Books_Stock();

void Add_Stock_to_Books (); //Mag dadagdag ng stock ng books
void List_Of_Children_Books_Add_Stock_Admin();

void func_Add_Stock_PictureBook();
void func_Add_Stock_FunnyBook();
void func_Add_Stock_ColoringBook();
void func_Add_Stock_StoryBook();
void func_Add_Stock_RomanceBook();
void func_Add_Stock_MysteryBook();
void func_Add_Stock_HistoricalBook();
void func_Add_Stock_ThrillerBook();

void Child_Picture_Books_Add_Stock();
void Child_Funny_Books_Add_Stock();
void Child_Coloring_Books_Add_Stock();
void Child_Story_Books_Add_Stock();

void List_Of_Adults_Books_Add_Stock_Admin();
void Adults_Romance_Books_Add_Stock();
void Adults_Mystery_Books_Add_Stock();
void Adults_Historical_Books_Add_Stock();
void Adults_Thriller_Books_Add_Stock();
void List_Of_Books_To_Sell (); //Navigate anong books ang available

//Books For Children
void List_Of_Books_In_Children_Section(); //Navigate sa mga books para sa children
void Children_PictureBook ();
void func_PictureBook();
void Children_FunnyBook();
void func_FunnyBook();
void Children_ColoringBook();
void func_ColoringBook();
void Children_StoryBook();
void func_StoryBook();

//Books for Adult
void List_Of_Books_In_Adult_Section(); //Navigate sa mga books para sa children
void Adult_RomanceBook();
void func_RomanceBook();
void Adult_MysteryBook();
void func_MysteryBook();
void Adult_HistoricalBook();
void func_HistoricalBook();
void Adult_ThrillerBook();
void func_ThrillerBook();

void func_Payment();
void Cart();
void Receipt();

int main () {

    cout << "\n\n"
         << "\t+-------------------------------------+" << endl
         << "\t|                                     |" << endl
         << "\t|            STORY BOUND              |" << endl
         << "\t|            BOOK STORE               |" << endl
         << "\t|                                     |" << endl
         << "\t+-------------------------------------+" << endl << endl;
    cout << "\t [1] List of Books" << endl
         << "\t [2] Cart " << Cart_Load_Indicator << " / " << Cart_Max_Load  << endl
         << "\t [3] Exit" << endl
         << "\t Select: ";
    cin >> Select;

          switch (Select) {
               case 1:
                    List_Of_Books_To_Sell();
                    break;
               case 2:
                    Cart();
                    break;
               case 3:
                    return 0;
               case 1010:
                    Admin();
                    break;
                    default:
                    main();
                    break;
          }

}

void printFormattedParagraph(const string& paragraph, int lineWidth) {
     int currentWidth = 0;
     string word;

     for (size_t i = 0; i < paragraph.length(); ++i) {
          char ch = paragraph[i];

          if (ch != ' ' && ch != '\n') {
               word += ch;
          } else {
               if (currentWidth + word.length() > lineWidth) {
                    cout << endl;
                    currentWidth = 0;
               }
               if (currentWidth == 0 ) {
                    cout << "\t ";
               }
               cout << word << " ";
               currentWidth += word.length() + 1;
               word.clear();
          }
     }

     if (!word.empty()) {
          if (currentWidth + word.length() > lineWidth) {
               cout << endl;
          }
          std::cout << word;
     }

     cout << endl;
}

void List_Of_Books_To_Sell () {

     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|            (Available)              |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] For Children Books" << endl
          << "\t [2] For Adults Books" << endl
          << "\t [3] Back " << endl
          << "\t Select: ";
     cin >> List_Of_Books_For_Children_And_Adult_Selection;

     switch (List_Of_Books_For_Children_And_Adult_Selection) {
          case 1:
               List_Of_Books_In_Children_Section();
               break;
               case 2:
               List_Of_Books_In_Adult_Section();
               break;
          case 3:
               main();
               break;
               default:
               List_Of_Books_To_Sell();
               break;

     }
}

void List_Of_Books_In_Children_Section () {
     cout << "\n\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|          (Children Books)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] Picture Books " << endl
          << "\t [2] Funny Books " << endl
          << "\t [3] Coloring Books" << endl
          << "\t [4] Story Books" << endl
          << "\t [5] Back" << endl
          << "\t Select: ";
     cin >> List_Of_Children_Books;
     switch (List_Of_Children_Books) {
          case 1:
               Children_PictureBook ();
               break;
          case 2:
               Children_FunnyBook ();
               break;
          case 3:
               Children_ColoringBook ();
               break;
          case 4:
               Children_StoryBook ();
               break;
          case 5:
               List_Of_Books_To_Sell();
               break;
          default:
               List_Of_Books_In_Children_Section();
               break;
     }
}

void func_PictureBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << "  by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
                         << "\t Introduction: " <<  endl;
                          printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1], lineWidth);
                    cout << endl
                         << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]
                         << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
                         << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] !=  Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Children_PictureBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Children_PictureBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Children_PictureBook();

                    }
               }  else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Children_PictureBook();
               }else if (toupper(Buy) == 'N' ) {
                    Children_PictureBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Children_PictureBook();
               }
}
void func_FunnyBook() {
     cout << "\n\n\n"
          << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << "  by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
          << "\t Introduction: " <<  endl;
          printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1], lineWidth);
          cout << endl
               << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]
               << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
               << "\t Add to your Cart(Y/N): ";
          cin >> Buy;
          if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] !=  Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
               cout << "\t How many: ";
               cin >> Sell;
               if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] ) {
                    Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] -= Sell;
                    Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                    Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                    Receipt_Bought[Cart_Load_Indicator] = Sell;
                    Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                    Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                    Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                    Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                    VAT += Sub_Total * 0.12;
                    Receipt_Total_Bought = VAT + Sub_Total;
                    cout << "\t Thankyou!!" << endl;
                    cout << "\t" << system("pause") << endl;
                    Cart_Load_Indicator += 1;
                    Children_FunnyBook();
               }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                    cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                    Children_FunnyBook();

               } else {

                    cout << "\t Wrong Input" << endl;
                    Children_FunnyBook();

               }
          } else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
               cout << "\t Your Cart is FULL!!!" << endl;
               cout << "\t " << system("pause");
               Children_FunnyBook();
          }else if (toupper(Buy) == 'N' ) {
               Children_PictureBook();
          } else {
               cout << "\t Wrong Input ..." << endl
                         << "\t" << system("pause") << endl;
               Children_FunnyBook();
          }
}
void func_ColoringBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << "  by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
                         << "\t Introduction: " <<  endl;
               printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1], lineWidth);
               cout << endl
                    << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]
                    << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
                    << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] !=  Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Children_ColoringBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Children_ColoringBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Children_ColoringBook();

                    }
               } else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Children_ColoringBook();
               }else if (toupper(Buy) == 'N' ) {
                    Children_PictureBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Children_ColoringBook();
               }
}
void func_StoryBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << "  by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
                         << "\t Introduction: " <<  endl;
               printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1], lineWidth);
               cout << endl
                    << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]
                    << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << endl
                    << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] !=  Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Children_StoryBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Children_StoryBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Children_StoryBook();

                    }
               }  else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Children_StoryBook();
               }else if (toupper(Buy) == 'N' ) {
                    Children_StoryBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Children_StoryBook();
               }
}

void Children_PictureBook() {
     cout << "\n\n\n\n"
               << "\t+-------------------------------------+" << endl
               << "\t|                                     |" << endl
               << "\t|           Picture Books             |" << endl
               << "\t|          (Children Books)           |" << endl
               << "\t|                                     |" << endl
               << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 5; k++) {
          cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl
                    << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k]
                    << "\t           Price: $" << fixed << setprecision(2) <<Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl << endl;
     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch (Select_Book_In_Children_Section) {
          case 1: func_PictureBook(); break;
          case 2: func_PictureBook(); break;
          case 3: func_PictureBook(); break;
          case 4: func_PictureBook(); break;
          case 5: func_PictureBook(); break;
          case 6: List_Of_Books_In_Children_Section(); break;
          default:
               cout << "\n\n\n"
                         << "\t Wrong Input! " << endl;
               Children_PictureBook();
               break;
     }
}
void Children_FunnyBook()  {
          cout << "\n\n\n\n"
               << "\t+-------------------------------------+" << endl
               << "\t|                                     |" << endl
               << "\t|            Funny Books              |" << endl
               << "\t|          (Children Books)           |" << endl
               << "\t|                                     |" << endl
               << "\t+-------------------------------------+" << endl << endl;
          for (int k = 0; k < 5; k++) {
               cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl
                         << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k]
                         << "\t           Price: $" << fixed << setprecision(2) <<Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl << endl;
     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch (Select_Book_In_Children_Section) {
          case 1: func_FunnyBook(); break;
          case 2: func_FunnyBook(); break;
          case 3: func_FunnyBook(); break;
          case 4: func_FunnyBook(); break;
          case 5: func_FunnyBook(); break;
          case 6: List_Of_Books_In_Children_Section(); break;
          default:
               cout << "\n\n\n"
                         << "\t Wrong Input! " << endl;
               Children_PictureBook();
               break;
     }
}
void Children_ColoringBook()  {
          cout << "\n\n\n\n"
               << "\t+-------------------------------------+" << endl
               << "\t|                                     |" << endl
               << "\t|           Coloring Books            |" << endl
               << "\t|          (Children Books)           |" << endl
               << "\t|                                     |" << endl
               << "\t+-------------------------------------+" << endl << endl;
          for (int k = 0; k < 5; k++) {
               cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl
                         << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k]
                         << "\t           Price: $" << fixed << setprecision(2) <<Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl << endl;
     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch (Select_Book_In_Children_Section) {
          case 1: func_ColoringBook(); break;
          case 2: func_ColoringBook(); break;
          case 3: func_ColoringBook(); break;
          case 4: func_ColoringBook(); break;
          case 5: func_ColoringBook(); break;
          case 6: List_Of_Books_In_Children_Section(); break;
          default:
               cout << "\n\n\n"
                         << "\t Wrong Input! " << endl;
               Children_PictureBook();
               break;
     }
}
void Children_StoryBook()  {
          cout << "\n\n\n\n"
               << "\t+-------------------------------------+" << endl
               << "\t|                                     |" << endl
               << "\t|            Story Books              |" << endl
               << "\t|          (Children Books)           |" << endl
               << "\t|                                     |" << endl
               << "\t+-------------------------------------+" << endl << endl;
          for (int k = 0; k < 5; k++) {
               cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl
                         << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k]
                         << "\t           Price: $" << fixed << setprecision(2) <<Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][k] << endl << endl;
     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch (Select_Book_In_Children_Section) {
          case 1: func_StoryBook(); break;
          case 2: func_StoryBook(); break;
          case 3: func_StoryBook(); break;
          case 4: func_StoryBook(); break;
          case 5: func_StoryBook(); break;
          case 6: List_Of_Books_In_Children_Section(); break;
          default:
               cout << "\n\n\n"
                         << "\t Wrong Input! " << endl;
               Children_StoryBook();
               break;
     }
}

void List_Of_Books_In_Adult_Section () {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|          (Adult Section)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] Romance Books" << endl
          << "\t [2] Mystery Books" << endl
          << "\t [3] Historical Fiction Books" << endl
          << "\t [4] Thriller Books" << endl
          << "\t [5] Back " << endl
          << "\t Select: ";
     cin >> List_Of_Adult_Books;
     switch (List_Of_Adult_Books) {
          case 1: Adult_RomanceBook(); break;
          case 2: Adult_MysteryBook(); break;
          case 3: Adult_HistoricalBook(); break;
          case 4: Adult_ThrillerBook(); break;
          case 5: List_Of_Books_To_Sell(); break;
          default:
               cout << "\n\n\n"
                         << "\t Wrong Input! " << endl;
               List_Of_Books_In_Adult_Section(); break;
     }
}

void func_RomanceBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Adult_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << "  by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                         << "\t Introduction: " <<  endl;
               printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1], lineWidth);
                    cout << endl
                         << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1]
                         << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                         << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] != Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Adult_RomanceBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Adult_RomanceBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Adult_RomanceBook();

                    }
               }else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Adult_RomanceBook();
               }else if (toupper(Buy) == 'N' ) {
                    Adult_RomanceBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Adult_RomanceBook();
               }
}
void func_MysteryBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Adult_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << "   by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                         << "\t Introduction: " <<  endl;
               printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1], lineWidth);
               cout << endl
                    << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1]
                    << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                    << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] != Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Adult_MysteryBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Adult_MysteryBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Adult_MysteryBook();

                    }
               }else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Adult_MysteryBook();
               }else if (toupper(Buy) == 'N' ) {
                    Adult_MysteryBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Adult_MysteryBook();
               }
}
void func_HistoricalBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Adult_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << "   by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                         << "\t Introduction: " <<  endl;
               printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1], lineWidth);
               cout << endl
                    << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1]
                    << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                    << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] != Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Adult_HistoricalBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Adult_HistoricalBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Adult_HistoricalBook();

                    }
               }else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Adult_HistoricalBook();
               }else if (toupper(Buy) == 'N' ) {
                    Adult_HistoricalBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Adult_HistoricalBook();
               }
}
void func_ThrillerBook() {
     cout << "\n\n\n"
                         << "\t [" << Select_Book_In_Adult_Section << "] Book: " << List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << "   by " << Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                         << "\t Introduction: " <<  endl;
               printFormattedParagraph(List_Of_All_Books_Synopsis[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1], lineWidth);
               cout << endl
                    << "\t Available: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1]
                    << "\t           Price: $" << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] << endl
                    << "\t Add to your Cart(Y/N): ";
               cin >> Buy;
               if (toupper(Buy) == 'Y' && List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] != Receipt_Book[Cart_Load_Indicator] && Cart_Load_Indicator < Cart_Max_Load) {
                    cout << "\t How many: ";
                    cin >> Sell;
                    if (Sell <= Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] ) {
                         Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1] -= Sell;
                         Receipt_Book[Cart_Load_Indicator] = List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Author[Cart_Load_Indicator] = Authors_Name[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Bought[Cart_Load_Indicator] = Sell;
                         Receipt_BarCode[Cart_Load_Indicator] = BarCode[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Price[Cart_Load_Indicator] = Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][Select_Book_In_Adult_Section-1];
                         Receipt_Total_Price[Cart_Load_Indicator] = Receipt_Price[Cart_Load_Indicator] * Sell;
                         Sub_Total += Receipt_Total_Price[Cart_Load_Indicator];
                         VAT += Sub_Total * 0.12;
                         Receipt_Total_Bought = VAT + Sub_Total;
                         cout << "\t Thankyou!!" << endl;
                         cout << "\t" << system("pause") << endl;
                         Cart_Load_Indicator += 1;
                         Adult_ThrillerBook();
                    }else if (Sell > Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1]) {

                         cout << "\t We only have: " << Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Children_Books-1][Select_Book_In_Children_Section-1] << " Available" << endl;
                         Adult_ThrillerBook();

                    } else {

                         cout << "\t Wrong Input" << endl;
                         Adult_ThrillerBook();

                    }
               }else if (toupper(Buy) == 'Y' && Cart_Load_Indicator == Cart_Max_Load) {
                    cout << "\t Your Cart is FULL!!!" << endl;
                    cout << "\t " << system("pause");
                    Adult_ThrillerBook();
               }else if (toupper(Buy) == 'N' ) {
                    Adult_ThrillerBook();
               } else {
                    cout << "\t Wrong Input ..." << endl
                              << "\t" << system("pause") << endl;
                    Adult_ThrillerBook();
               }
}

void Adult_RomanceBook() {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           Romance Books             |" << endl
          << "\t|           (Adult Books)             |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 5; k++) {
          cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl
               << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k]
               << "\t           Price: $" << fixed << setprecision(2) << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl << endl;
     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch (Select_Book_In_Adult_Section) {
          case 1: func_RomanceBook(); break;
          case 2: func_RomanceBook(); break;
          case 3: func_RomanceBook(); break;
          case 4: func_RomanceBook(); break;
          case 5: func_RomanceBook(); break;
          case 6: List_Of_Books_In_Adult_Section(); break;
               default:
                    cout << "\t Wrong Input" << endl;
                    Adult_RomanceBook();
               break;
     }
}
void Adult_MysteryBook() {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|            Mystery Books            |" << endl
          << "\t|            (Adult Books)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 5; k++) {
          cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl
               << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k]
               << "\t           Price: $" <<  fixed << setprecision(2) << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl << endl;
     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch (Select_Book_In_Adult_Section) {
          case 1: func_MysteryBook(); break;
          case 2: func_MysteryBook(); break;
          case 3: func_MysteryBook(); break;
          case 4: func_MysteryBook(); break;
          case 5: func_MysteryBook();  break;
          case 6: List_Of_Books_In_Adult_Section(); break;
               default:
                    cout << "\t Wrong Input" << endl;
                    Adult_MysteryBook();
               break;
     }
}
void Adult_HistoricalBook() {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|          Historical Books           |" << endl
          << "\t|           (Adult Books)             |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 5; k++) {
          cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl
               << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k]
               << "\t           Price: $" << fixed << setprecision(2) << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl << endl;

     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch (Select_Book_In_Adult_Section) {
          case 1: func_HistoricalBook();break;
          case 2: func_HistoricalBook(); break;
          case 3: func_HistoricalBook(); break;
          case 4: func_HistoricalBook(); break;
          case 5: func_HistoricalBook(); break;
          case 6: List_Of_Books_In_Adult_Section(); break;
               default:
                    cout << "\t Wrong Input" << endl;
                    Adult_HistoricalBook();
               break;
     }
}
void Adult_ThrillerBook() {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           Thriller Books            |" << endl
          << "\t|           (Adult Books)             |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 5; k++) {
          cout << "\t ["<< k+1 << "] Book: " <<List_Of_All_Books[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl
               << "\t Available: "<< Units[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k]
               << "\t           Price: $" << fixed << setprecision(2) << Prices[List_Of_Books_For_Children_And_Adult_Selection-1][List_Of_Adult_Books-1][k] << endl << endl;

     }
     cout << "\t [6] Back" << endl;
     cout << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch (Select_Book_In_Adult_Section) {
          case 1: func_ThrillerBook(); break;
          case 2: func_ThrillerBook(); break;
          case 3: func_ThrillerBook(); break;
          case 4: func_ThrillerBook(); break;
          case 5: func_ThrillerBook(); break;
          case 6: List_Of_Books_In_Adult_Section(); break;
          default:
                    cout << "\t Wrong Input" << endl;
                    Adult_ThrillerBook();
               break;
     }
}

void Admin() {

     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                 |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] List of Books (Units) " << endl
          << "\t [2] Low On Stock " << endl
          << "\t [3] Add Units of Books " << endl
          << "\t [4] Back " << endl
          << "\t Select: ";
     cin >> Select;
          switch (Select) {
               case 1:
                    List_Of_Stocks_Books ();
                    break;
               case 2:
                    Low_On_Stock_Books();
                    break;
               case 3:
                    Add_Stock_to_Books ();
                    break;
               case 4:
                    main();
                    break;
               default:
                    Admin();
                    break;
          }
}
void List_Of_Stocks_Books () {

     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                 |" << endl
          << "\t|          (List of Books)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl << endl;
     cout << "\t [1] For Children Book" << endl
          << "\t [2] For Adults" << endl
          << "\t [3] Back " << endl
          << "\t Select: ";
     cin >> Admin_Selection;
     switch (Admin_Selection) {
          case 1:
               List_Of_Children_Books_Admin();
               break;
          case 2:
               List_Of_Adults_Books_Admin();
               break;
          case 3:
               Admin();
               break;
               default:
               List_Of_Stocks_Books();
               break;
     }
}
void List_Of_Children_Books_Admin() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                 |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] Picture Books " << endl
          << "\t [2] Funny Books " << endl
          << "\t [3] Coloring Books" << endl
          << "\t [4] Story Books" << endl
          << "\t [5] Back" << endl
          << "\t Select: ";
     cin >> Admin_Child_Books_Units;
          switch (Admin_Child_Books_Units) {
               case 1: Child_Funny_Books_Stock(); break;
               case 2: Child_Funny_Books_Stock(); break;
               case 3: Child_Funny_Books_Stock(); break;
               case 4: Child_Funny_Books_Stock(); break;
               case 5:
                    List_Of_Stocks_Books();
                    break;
               default:
                    List_Of_Children_Books_Admin();
                    break;

          }
}
void Child_Picture_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|            Picture Books            |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Children_Books_Admin();

}
void Child_Funny_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|             Funny Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Children_Books_Admin();

}
void Child_Coloring_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|           Coloring Books            |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Children_Books_Admin();

}
void Child_Story_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                |" << endl
          << "\t|             Story Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Children_Books_Admin();

}
void List_Of_Adults_Books_Admin() {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|          (Adult Section)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] Romance Books" << endl
          << "\t [2] Mystery Books" << endl
          << "\t [3] Historical Fiction Books" << endl
          << "\t [4] Thriller Books" << endl
          << "\t [5] Back " << endl
          << "\t Select: ";
     cin >> Admin_Child_Books_Units;
     switch (Admin_Child_Books_Units) {
          case 1:
               Adults_Romance_Books_Stock();
               break;
          case 2:
               Adults_Mystery_Books_Stock();
               break;
          case 3:
               Adults_Historical_Books_Stock();
               break;
          case 4:
               Adults_Thriller_Books_Stock();
               break;
          case 5:
               List_Of_Stocks_Books();
               break;
          default:
               List_Of_Children_Books_Admin();
               break;

     }
}
void Adults_Romance_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|            Romance Books            |" << endl
          << "\t|           (Adult Section)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Adults_Books_Admin();

}
void Adults_Mystery_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|            Mystery Books            |" << endl
          << "\t|           (Adult Section)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Adults_Books_Admin();

}
void Adults_Historical_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|          Historical Books           |" << endl
          << "\t|          (Adult Section)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Adults_Books_Admin();

}
void Adults_Thriller_Books_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|           Thriller Books            |" << endl
          << "\t|           (Adult Section)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     system("pause");
     List_Of_Adults_Books_Admin();

}

void Low_On_Stock_Books() {
     string Section[2] = {"CHILDREN SECTION","ADULT SECTION"};
     string Children_And_Adult_Books[2][4] = {
          {
               "Picture Book","Funny Book","Coloring Book","Story Book"
          },
          {
               "Romance Book","Mystery Book","Historical Book","Thriller Book"
          }
     };
     int indicator = 0;
     int message[2][4];
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|         LOW ON STOCK BOOKS          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 2; k++) {
          cout << "\t " << Section[k] << endl << endl;
          for (int i = 0; i < 4; i++) {
               cout <<"\t " << Children_And_Adult_Books[k][i] << endl;
               for (int j = 0; j < 5; j++) {
                    if (Units[k][i][j] <= 5) {
                         cout << "\t ["<< j+1 << "] Book: " <<List_Of_All_Books[k][i][j] << endl
                              << "\t Stock: "<< Units[k][i][j]  << ":  Low On Stock"<< endl << endl;
                         indicator += 1;
                    } else if (Units[k][i][j] <= 10){
                         cout << "\t ["<< j+1 << "] Book: " <<List_Of_All_Books[k][i][j] << endl
                              << "\t Stock: "<< Units[k][i][j]  << ":  Med On Stock"<< endl << endl;
                         indicator += 1;
                    }
               }
               if (indicator == 0) {
                    cout << "\t FULLY STOCK" << endl
                         << endl;
               }
               indicator = 0;
          }
          cout << endl << endl;
     }
     cout << "\t " << system("pause");
     Admin();
}

void Add_Stock_to_Books () {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                 |" << endl
          << "\t|          (List of Books)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl << endl;
     cout << "\t [1] For Children Book" << endl
          << "\t [2] For Adults" << endl
          << "\t [3] Back " << endl
          << "\t Select: ";
     cin >> Admin_Selection;
     switch (Admin_Selection) {
          case 1:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
          case 2:
               List_Of_Adults_Books_Add_Stock_Admin();
               break;
          case 3:
               List_Of_Stocks_Books();
               break;
          default:
               Add_Stock_to_Books();
               break;
     }
}

void List_Of_Children_Books_Add_Stock_Admin() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                 |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] Picture Books " << endl
          << "\t [2] Funny Books " << endl
          << "\t [3] Coloring Books" << endl
          << "\t [4] Story Books" << endl
          << "\t [5] Back" << endl
          << "\t Select: ";
     cin >> Admin_Child_Books_Units;
     switch (Admin_Child_Books_Units) {
          case 1:
               Child_Picture_Books_Add_Stock();
               break;
          case 2:
               Child_Picture_Books_Add_Stock();
               break;
          case 3:
               Child_Picture_Books_Add_Stock();
               break;
          case 4:
               Child_Picture_Books_Add_Stock();
               break;
          case 5:
               Add_Stock_to_Books();
               break;
          default:
               List_Of_Children_Books_Add_Stock_Admin();
               break;

     }
}

void func_Add_Stock_PictureBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Child_Picture_Books_Add_Stock();
     } else {
          Child_Picture_Books_Add_Stock();
     }
}
void func_Add_Stock_FunnyBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Child_Funny_Books_Add_Stock();
     } else {
          Child_Funny_Books_Add_Stock();
     }
}
void func_Add_Stock_ColoringBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Child_Coloring_Books_Add_Stock();
     } else {
          Child_Coloring_Books_Add_Stock();
     }
}
void func_Add_Stock_StoryBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Child_Story_Books_Add_Stock();
     } else {
          Child_Story_Books_Add_Stock();
     }
}

void Child_Picture_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                 |" << endl
          << "\t|           Picture Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch(Select_Book_In_Children_Section) {
          case 1:
               func_Add_Stock_PictureBook();
               break;
          case 2:
               func_Add_Stock_PictureBook();
               break;
          case 3:
               func_Add_Stock_PictureBook();
               break;
          case 4:
               func_Add_Stock_PictureBook();
               break;
          case 5:
               func_Add_Stock_PictureBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Child_Picture_Books_Add_Stock();
               break;

     }

}
void Child_Funny_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|             Funny Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch(Select_Book_In_Children_Section) {
          case 1:
               func_Add_Stock_FunnyBook();
               break;
          case 2:
               func_Add_Stock_FunnyBook();
               break;
          case 3:
               func_Add_Stock_FunnyBook();
               break;
          case 4:
               func_Add_Stock_FunnyBook();
               break;
          case 5:
               func_Add_Stock_FunnyBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Child_Funny_Books_Add_Stock();
               break;

     }

}
void Child_Coloring_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|           Coloring Books            |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch(Select_Book_In_Children_Section) {
          case 1:
               func_Add_Stock_ColoringBook();
               break;
          case 2:
               func_Add_Stock_ColoringBook();
               break;
          case 3:
               func_Add_Stock_ColoringBook();
               break;
          case 4:
               func_Add_Stock_ColoringBook();
               break;
          case 5:
               func_Add_Stock_ColoringBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
          default:
               Child_Coloring_Books_Add_Stock();
               break;

     }
}
void Child_Story_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|               ADMIN                |" << endl
          << "\t|             Story Books             |" << endl
          << "\t|         (Children Section)          |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Child_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Children_Section;
     switch(Select_Book_In_Children_Section) {
          case 1:
               func_Add_Stock_StoryBook();
               break;
          case 2:
               func_Add_Stock_StoryBook();
               break;
          case 3:
               func_Add_Stock_StoryBook();
               break;
          case 4:
               func_Add_Stock_StoryBook();
               break;
          case 5:
               func_Add_Stock_StoryBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Child_Story_Books_Add_Stock();
               break;

     }

}

void List_Of_Adults_Books_Add_Stock_Admin() {
     cout << "\n\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|           List Of Books             |" << endl
          << "\t|          (Adult Section)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     cout << "\t [1] Romance Books" << endl
          << "\t [2] Mystery Books" << endl
          << "\t [3] Historical Fiction Books" << endl
          << "\t [4] Thriller Books" << endl
          << "\t [5] Back " << endl
          << "\t Select: ";
     cin >> Admin_Adult_Books_Units;
     switch (Admin_Adult_Books_Units) {
          case 1:
               Adults_Romance_Books_Add_Stock();
               break;
          case 2:
               Adults_Mystery_Books_Add_Stock();
               break;
          case 3:
               Adults_Historical_Books_Add_Stock();
               break;
          case 4:
               Adults_Thriller_Books_Add_Stock();
               break;
          case 5:
               Add_Stock_to_Books();
               break;
          default:
               List_Of_Adults_Books_Add_Stock_Admin();
               break;

     }
}

void func_Add_Stock_RomanceBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Adults_Romance_Books_Add_Stock();
     } else {
          Adults_Romance_Books_Add_Stock();
     }
}
void func_Add_Stock_MysteryBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Adults_Mystery_Books_Add_Stock();
     } else {
          Adults_Mystery_Books_Add_Stock();
     }
}
void func_Add_Stock_HistoricalBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Adults_Historical_Books_Add_Stock();
     } else {
          Adults_Historical_Books_Add_Stock();
     }
}
void func_Add_Stock_ThrillerBook() {
     cout << endl
               << "\t [" << Select_Book_In_Children_Section << "] Book: " << List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section-1] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][Select_Book_In_Adult_Section - 1] << endl
               << "\t Add Stock(Y/N): ";
     cin >> Add_Stock;
     if (toupper(Add_Stock) == 'Y') {
          cout << "\t How many: ";
          cin >> Add_Stock_To_Books;
          Units[Admin_Selection-1][Admin_Child_Books_Units-1][Select_Book_In_Children_Section - 1] += Add_Stock_To_Books;
          Adults_Thriller_Books_Add_Stock();
     } else {
          Adults_Thriller_Books_Add_Stock();
     }
}

void Adults_Romance_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|            Romance Books            |" << endl
          << "\t|           (Adult Section)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch(Select_Book_In_Adult_Section) {
          case 1:
               func_Add_Stock_RomanceBook();
               break;
          case 2:
               func_Add_Stock_RomanceBook();
               break;
          case 3:
               func_Add_Stock_RomanceBook();
               break;
          case 4:
               func_Add_Stock_RomanceBook();
               break;
          case 5:
               func_Add_Stock_RomanceBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Adults_Romance_Books_Add_Stock();
               break;

     }

}
void Adults_Mystery_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|            Mystery Books            |" << endl
          << "\t|           (Adult Section)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch(Select_Book_In_Adult_Section) {
          case 1:
               func_Add_Stock_HistoricalBook();
               break;
          case 2:
               func_Add_Stock_HistoricalBook();
               break;
          case 3:
               func_Add_Stock_HistoricalBook();
               break;
          case 4:
               func_Add_Stock_HistoricalBook();
               break;
          case 5:
               func_Add_Stock_HistoricalBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Adults_Mystery_Books_Add_Stock();
               break;

     }

}
void Adults_Historical_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|          Historical Books           |" << endl
          << "\t|          (Adult Section)            |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch(Select_Book_In_Adult_Section) {
          case 1:
               func_Add_Stock_HistoricalBook();
               break;
          case 2:
               func_Add_Stock_HistoricalBook();
               break;
          case 3:
               func_Add_Stock_HistoricalBook();
               break;
          case 4:
               func_Add_Stock_HistoricalBook();
               break;
          case 5:
               func_Add_Stock_HistoricalBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Adults_Historical_Books_Add_Stock();
               break;

     }

}
void Adults_Thriller_Books_Add_Stock() {
     cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                ADMIN                |" << endl
          << "\t|           Thriller Books            |" << endl
          << "\t|           (Adult Section)           |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int i = 0; i < 5; i++) {
          cout << "\t ["<< i+1 << "] Book: " <<List_Of_All_Books[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl
               << "\t           Stock: "<< Units[Admin_Selection-1][Admin_Adult_Books_Units-1][i] << endl;
     }
     cout << "\t [0] Back " << endl
          << "\t Select: ";
     cin >> Select_Book_In_Adult_Section;
     switch(Select_Book_In_Adult_Section) {
          case 1:
               func_Add_Stock_ThrillerBook();
               break;
          case 2:
               func_Add_Stock_ThrillerBook();
               break;
          case 3:
               func_Add_Stock_ThrillerBook();
               break;
          case 4:
               func_Add_Stock_ThrillerBook();
               break;
          case 5:
               func_Add_Stock_ThrillerBook();
               break;
          case 0:
               List_Of_Children_Books_Add_Stock_Admin();
               break;
               default:
               Adults_Thriller_Books_Add_Stock();
               break;

     }
}

void func_Payment() {
     if (Receipt_Book[0] == "") {
                       cout << "\t Add Books to Cart to Buy" << endl;
                       Cart();
                  } else {
                       cout << "\n\t Payment Method:" << endl << endl
                            << "\t [1] CASH" << endl
                            << "\t [2] GCASH " << endl
                            << "\t [3] BACK" << endl
                            << "\t Select: ";
                       cin >> payment;
                       switch (payment) {
                            case '1':
                                 cout << "\t CASH " << endl << endl
                                      << "\t Amount Due: " << Receipt_Total_Bought << endl
                                      << "\t Credited: ";
                                 cin >> Payment;
                                 if (Payment >= Receipt_Total_Bought) {
                                      Change = Payment - Receipt_Total_Bought;
                                      Receipt();
                                 } else {
                                      cout << "\t Not Enought" << endl;
                                      Cart();
                                 }
                                 break;
                            case '2':
                                 cout << "\t GCASH " << endl << endl
                                      << "\t Amount Due: " << Receipt_Total_Bought << endl
                                      << "\t Credited: ";
                                 cin >> Payment;
                                 if (Payment >= Receipt_Total_Bought){
                                      Change = Payment - Receipt_Total_Bought;
                                      Receipt();
                                 } else {
                                      cout << "\t Not Enought" << endl;
                                      Cart();
                                 }
                                 break;
                            case '3':
                                 Cart();
                                 break;
                            default:
                                 Cart();
                                 break;
                       }
                  }
}

void Cart() {
    cout << "\n\n\n"
          << "\t+-------------------------------------+" << endl
          << "\t|                                     |" << endl
          << "\t|                                     |" << endl
          << "\t|                CART                 |" << endl
          << "\t|                                     |" << endl
          << "\t|                                     |" << endl
          << "\t+-------------------------------------+" << endl << endl;
     for (int k = 0; k < 30; k++) {
          if (Receipt_Book[k] == "") {
               continue;
          }
          cout << "\t Book: " << Receipt_Book[k] <<"  by " << Receipt_Author[k] << endl
                 << "\t BarCode: " << Receipt_BarCode[k] << endl
                 << "\t QTY: " << Receipt_Bought[k] << "\t Price: " << Receipt_Price[k]  << endl
                 << "\t Total: " << Receipt_Total_Price[k] << endl << endl;
     }
    cout << endl << endl
         << "\t Sub Total: " << Sub_Total << endl
         << "\t VAT 12%: " << VAT << endl;
    cout << "\t Total Price: " << Receipt_Total_Bought;
    cout << "\t Total Cart: " << Cart_Load_Indicator << " / " << Cart_Max_Load << endl << endl
         << "\t [1] Buy " << endl
         << "\t [2] Back " << endl
         << "\t Select: ";
    cin >> Cart_Select;
        switch (Cart_Select) {
             case '1':
                  func_Payment();
            break;
             case '2':
                  main();
            break;
            default:
            Cart();
            break;
        }

}
void Receipt() {
     cout << "\t";
     for (int i = 0; i < 92; i ++) {
          cout << "\xdb";
     }
     cout << endl;
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t\xdb                                        STORY BOUND                                       \xdb" << endl;
     cout << "\t\xdb                                         BOOK STORE                                       \xdb" << endl;
     cout << "\t\xdb                                       ANTIPOLO CITY                                      \xdb" << endl;
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t\xdb DATE: " << put_time(localtime(&currentTime), "%Y-%m-%d \t\t\t                                    Time: %H:%M:%S") << " \xdb" << endl;
     cout << "\t\xdb TRANSACTION NUMBER: " <<setw(10) << TransactionNumber <<"                                                           \xdb" << endl;
     cout << "\t\xdb    BARCODE     |                 PRODUCT                     | QTY.PRICE | QTY |  TOTAL  \xdb" << endl;
     for (int k = 0; k < 30; k++) {
          if (Receipt_Book[k] == "") {
               continue;
          }
          cout << "\t\xdb  "<<setw(10) << left << Receipt_BarCode[k] << " | " << setw(43) << left << Receipt_Book[k] << " | $" << setw(9) << left << Receipt_Price[k] << "| " << setw(2) << right << Receipt_Bought[k] << "  |$" << setw(7) << left << fixed << setprecision(2) << Receipt_Total_Price[k] <<   " \xdb" << endl;
     }
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t\xdb Sub Total: $" << setw(8) << left << fixed << setprecision(2) << Sub_Total <<"                                                                     \xdb" << endl;
     cout << "\t\xdb VAT 12%: $" << setw(7) << left <<  VAT <<"                                                                        \xdb" << endl;
     cout << "\t\xdb Total Price: $" << setw(8) << left << fixed << setprecision(2) << Receipt_Total_Bought <<"                                                                   \xdb" << endl;
          if (payment == '2') {
               cout << "\t\xdb                                                                                          \xdb" << endl;
               cout << "\t\xdb GCASH PAYMENT:                                                                           \xdb" << endl;
               cout << "\t\xdb                                                                                          \xdb" << endl;
               cout << "\t\xdb Reference #: " << reference << "                                                                    \xdb" << endl;
               cout << "\t\xdb Payment: $" << setw(8) << left <<fixed << setprecision(2) << Payment <<"                                                                       \xdb" << endl;
               reference += 1;
          }
     cout << "\t\xdb Change: $" << setw(7) << left << Change << "                                                                         \xdb" << endl;
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t\xdb                                  THANK YOU FOR BUYING!!!                                 \xdb" << endl;
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t\xdb                                                                                          \xdb" << endl;
     cout << "\t";
     for (int i = 0; i < 92; i ++) {
          cout << "\xdb";
     }

          cout << "\n\n\t Do you want to buy again? (Y/N): ";
          cin >> Buy_Again;
          TransactionNumber += 1;
          if (toupper(Buy_Again) == 'Y') {
               for (int i = 0; i < 30; i++) {
                    Receipt_Total_Bought = 0;
                    Receipt_Total_Price[i] = 0;
                    Receipt_BarCode[i] = 0;
                    Receipt_Book[i] = "";
                    Receipt_Bought[i] = 0;
                    Receipt_Price[i] = 0;
                    Cart_Load_Indicator = 0;
                    Sub_Total = 0;
                    VAT = 0;
               }
               main();
          } else if (toupper(Buy_Again) == 'N') {

          } else {
               cout << "\t Wrong Input ..." << endl;
               Receipt();
          }
}