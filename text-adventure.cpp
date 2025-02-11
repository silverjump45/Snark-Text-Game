#include <iostream>

int main() {
    std::cout << "     An expedition has been launched and the crew has assembled.\n";
    std::cout << "    There is a bellman and bonnet maker, a banker and a barrister.\n";
    std::cout << "     Tagging along are a billard maker, a broker, and a baker.\n";
    std::cout << "boots & a butcher. Also included is a rather intelligent talking beaver.\n";
    std::cout << "\n";
    std::cout << "------------------------------------------------------------------------\n";
    std::cout << "--------------The Hunting of The Snark has begun!!!---------------------\n";
    std::cout << "------------------------------------------------------------------------\n";
    std::cout << "\n";
    std::cout << "The bellman is at the helm and calls for someone to untie the ship from dock.\n";
    std::cout << "The knot unfortunelty has been tied by the billard maker, who knows nothing of rope.\n";
    std::cout << "The baker says he can untie it but the butcher wants to chop the rope, while the beaver offers to naw it...\n";

    char choice1;

    for(int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {
        std::cout << "Enter A if you think the baker should try to untie the knot\n";
        std::cout << "Enter B if you want the butcher to chop the rope.\n";
        std::cout << "Enter C if you order the beaver to naw the knot off.\n";
        std::cin >> choice1;
        
    }
    switch(choice1) {
        case 'A':
            std::cout << "The baker bends down over the knot but finds it far too tight for his fingers.\n";
            std::cout << "The billard maker begins to laugh at him and poke him and the knot with the pool cue.\n";
            std::cout << "The baker swats away the cue with his rolling pin and the cue slides into the kont, then breaks.\n";
            std::cout << "The billard maker is crest fallen and the baker twists the broken cue, magically making the knot fall apart.\n";
            std::cout << "The baker tries to console the billard maker and billard maker says he has other cues so it not terrible.\n";
            break;
        
        case 'B':
            std::cout << "The butcher raises his arm, while the broker sudden jumps in front of him.\n";
            std::cout << "'Do you know the current price of pier rope?!? Don't you dare cut thr that knot!!!', screamed the broker.\n";
            std::cout << "The banker comes over and assures the broker they ca afford new rope and the real cost was holding the ship in port.\n";
            std::cout << "The butcher drops his blade and the ship is free.\n";
            break;

        case 'C':
            std::cout << "The beaver begins to smile and pounces on the rope.\n";
            std::cout << "All the rest of the crew can see is the beavers tail slaping the pier, and finally with a mighty chomp the ship is free.\n";
            break;

        default:
            std::cout << "Sorry you didn't enter a valid choice.\n";
            std::cout << "You saw a Boojam and vanished.\n";
            system("pause");
            return 0;
    }

    std::cout << "The sails fill and the ship makes good time leaving the bay.\n";
    std::cout << "The bellman speaks to no one while at the helm and no one speaks to him. Without much direction, the rest of the crew gets their chores done.\n";
    std::cout << "The crew mills about and plays games of chance against eachother to break up the monotony.\n";
    std::cout << "The billardmaker makes a bet he can sink an extra cannon ball off the deck with an oar and another ball used a a cue.\n";
    std::cout << "'Place Your Bets!,' yells the broker.\n";
    
    char choice2;

    for(int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B' && choice2 != 'C'; i++) {
        std::cout << "Enter A if you bet the billard maker makes the shot!\n";
        std::cout << "Enter B if you bet the shot is missed...\n";
        std::cout << "Enter C if you bet the billard maker scratches...\n";
        std::cin >> choice2;
    
    } 

    switch (choice2) {
    
        case 'C':
            std::cout << "The cannon ball is hit clean and karroms off the deck!\n";
            std::cout << "Unfortently for the billard maker but not you, the cue doesn't have much backspin.\n";
            std::cout << "The cue cannon ball gets dangerously close to the port side when suddenly a swell lifts the starboard!\n";
            std::cout << "The cue disappears over the edge and you foolishly run over to see it hit the water!\n";
            std::cout << "At the edge you see no ball but a mop of dark hair, large teeth, and giant eyes!!!\n";
            std::cout << "You saw a Boojam and vanished.\n";
            system("pause");
            return 0;
    
        case 'A':
            std::cout << "The billard maker lines up the shot and many other bets are placed.\n";
            std::cout << "The broker says you made a wise bet as the billard maker made the same bet, though the banker says it was a heavy wager.\n";
            std::cout << "The butcher is jumping up and down, while the bonnet make mops their brow.\n";
            std::cout << "The shot is made and goes in!\n";
            std::cout << "Unfortently after fees from the broker and the bankers exchange rate, you seem to have lost 5 pence...\n";
            break;
    
        case 'B':
            std::cout << "The rakeish billard maker winks at you and bounces the shot off the mast, potting nothing.\n";
            std::cout << "You touch your nose and the billard maker pulls their collar.\n";
            std::cout << "You tell the banker to keep you and the shot takers winnings in a interest bearing 5 percent account until the Snark is landed!\n";
            break;
    
        default:
            std::cout << "Sorry, you haven't entered a valid choice.\n";
            std::cout << "You saw a Boojam and vanished.\n";
            system("pause");
            return 0;
    
    }

    std::cout << "The beaver has somehow ran away fro his gambling debts to the crow's nest.\n";
    std::cout << "This was probably good for the rest of the crew was getting hungery for lunch and the butcher had said something about stewed potato beaver tail...\n";
    std::cout << "'An island! AN ISLAND!', cried the beaver suddenly.\n";
    std::cout << "The bellman broke from the helm and made with his spy glass.\n";
    std::cout << "The bellman scronfully declares, 'I see nothing but a fog bank! Go to the bow and see what you can see!!!'\n";
    std::cout << "Reaching the extremely front of the ship, you bring the spy glass to your eye...\n";
    std::cout << "What do you see?\n";
    char choice3;

    for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {
        std::cout << "Enter A if you see the island the beaver spotted...\n";
        std::cout << "Enter B if you see a dark mass bobbing in water, just to the port side off the ship...\n";
        std::cin >> choice3;
    }    
    
    if(choice3 != 'A' && choice3 != 'B') {
        std::cout << "Sorry , you haven't entered a valid choice.\n";
        std::cout << "You saw a Boojam and vanished...\n";
        system("pause");
        return 0;
    
    } else if(choice3 == 'B') {
        std::cout << "The dark body begins to roll in the water, appearing bigger than the ship at this distance...\n";
        std::cout << "'No, no! Over there!', yells the beaver but it's too late...\n";
        std::cout << "You lock eyes with the monster and suddenly you aren't there...\n";
        std::cout << "You saw a Boojam and vanished...\n";
        system("pause");
        return 0;
    }

    std::cout << "You alert the bellman to the island, as the broker and bonnet maker pat you on the back.\n";
    std::cout << "'I spotted it first!, the beaver detests. 'I deserve the captain's prize!'\n";
    std::cout << "'What do you request as a prize, Sir Beaver?', asks the bellman.\n";
    std::cout << "'I demand that I am not on the butcher's menu in the future,' replied the beaver.\n";
    std::cout << "'Well, what should I make for lunch?!?!,' cries the butcher.\n";
    std::cout << "Well I have fresh bread,' tells the baker. 'Why does someone go fishing?'\n";
    char choice4;

    for(int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {
        std::cout << "Enter A if you use a small fishing hook with the bonnetmaker's littlest bonnet...\n";
        std::cout << "Enter B if you use a regular hook with some of the butcher's cheese he was hidding...\n";
        std::cout << "Enter C if you use a large hook with the baker's fresh bread as bait...\n";
        std::cin >> choice4;

    }

    if(choice4 != 'A' && choice4 != 'B' && choice4 != 'C') {
        std::cout << "Sorry, you haven't entered a valid choice.\n";
        std::cout << "You saw a Boojam and vanished...\n";
        system("pause");
        return 0;

    } else if(choice4 == 'A' || choice4 == 'B') { 
        std::cout << "The line drifts in the water for a while, as the crew get hungrier and hungrier...\n";
        std::cout << "The beaver is making an awful racket up in the crow's nest and the butcher sharpens his clever with one eye up the mast.\n";
        std::cout << "Finally a tug at the line and you set the hook!\n";
        std::cout << "It's a quick fight and you land a Blue Fine tuna, big enough for several meals. You hand it over to the butcher.\n";

    } else if(choice4 == 'C') {
        std::cout << "The line hits the water and instantly something begins to run away with it.\n";
        std::cout << "The pole is whipped first to the bow and then stern and then back.\n";
        std::cout << "'I think this monster is soing under the ship!' says the boots, leaning over the edge.\n";
        std::cout << "With a huge splash, teeth and claws erupt from the water and the last thing you see are huge white eyes...\n";
        std::cout << "You saw a Boojam and vanished...\n";
        system("pause");
        return 0; 
    }

    std::cout << "The butcher prepares a tuna salad as big a bushel, as the bellman guides the ship to the island where the Snark is suspected.\n";
    std::cout << "As you are finishing the meal, the bellman asks for volunteers to go ashore.\n";
    std::cout << "'Those that go will recieve extra pay and a greater share of the Snark, should we find it,' says the ship's leader.\n";
    std::cout << "What is your choice?\n";
    char choice5;

    for(int i = 0; i < 3 && choice5 != 'A' && choice5 != 'B' && choice5 != 'C'; i++) {
        std::cout << "Enter A if you volunteer to go ashore and hunt the Snark.\n";
        std::cout << "Enter B if you ask to stay on the safe, safe ship.\n";
        std::cout << "Enter C if you stand in for the bellman as Captain on the ship as he chases the Snark.\n";
        std::cin >> choice5;

    }

    switch (choice5) {

        case 'A':
            std::cout << "You climb over the rail and into the dingy that will bring you to shore.\n";
            std::cout << "Rowing quickly, you are the shore in 10 minutes. The baker, the boots, the beaver, and the bellman make up your party.\n";
            std::cout << "The jungle is thick and the only path follows a small river up into vine covered hills.\n";
            std::cout << "The boots calls out,'A cave! A cave!'. The enterance shows signs claws and there are silver stones across it's opening.\n";
            std::cout << "Suddenly shiny teech appear and eyes as big as the butcher's frying pan.\n";
            std::cout << "You saw a Boojam and vanished...\n";
            system("pause");
            return 0;

        case 'B':
            std::cout << "You busy yourself by play dice games with the other shipmates.\n";
            std::cout << "It becomes dark before you notice and the butcher prepares tuna steaks for dinner, but the dingy doesn't return.\n";
            std::cout << "'Here take the Captain's spy glass to the top of the mast and see if you see our landing party,' says the broker.\n";
            std::cout << "Though the big meal makes the climb difficult, you reach the top quickly and raise the glass to the island.\n";
            std::cout << "The dingy is visible but no crew members. The trees begin shaking and a monstrous dark figure explodes from the jungle.\n";
            std::cout << "You saw a Boojam and vanished...\n";
            system("pause");
            return 0;

        case 'C':
            std::cout << "As soon as the dingy is out of range, you order the remaining crew to pull up anchor and set sail...\n";
            std::cout << "'Only a fool hunts a Snark, on land or on sea...\n";
            std::cout << "'I since I am the captain, the fool is not me...\n";
            std::cout << "'So I'll take the ship and live till the dawn...\n";
            std::cout << "'And I won't see a Boojam and have to be gone!!!\n";
            std::cout << "You made the right choice and decided to not hunt the Snark!!!\n";
            std::cout << "CoNgRaDulAtions!!! YoU wIn!!!\n";
            system("pause");
            break;

        default:
            std::cout << "Sorry, you haven't entered a vaild choice.\n";
            std::cout << "You saw a Boojam and vanished...\n";
            system("pause");
            return 0;
    }

}