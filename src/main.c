#include <stdio.h>
typedef struct {
    char name[60];
    char director[60];
    char runtime[20];
    char rating[10];
    char description[200];
    char trailer[200];
} Movie;
Movie romance[10] = {
{"Titanic","James Cameron","3h 15m","7.9","A tragic love story aboard the doomed Titanic.","https://youtu.be/kVrqfYjkTdQ"},
{"The Notebook","Nick Cassavetes","2h 3m","7.8","A lifelong romance tested by memory.","https://youtu.be/FC6biTjEyZw"},
{"La La Land","Damien Chazelle","2h 8m","8.0","Two dreamers fall in love.","https://youtu.be/0pdqf4P9MB8"},
{"Before Sunrise","Richard Linklater","1h 41m","8.1","Two strangers connect overnight.","https://youtu.be/6MUcuqbGTxc"},
{"Pride and Prejudice","Joe Wright","2h 9m","7.8","Love and misunderstandings in old England.","https://youtu.be/Ur_DIHs92NM"},
{"A Walk to Remember","Adam Shankman","1h 41m","7.4","Love changes a rebellious teen.","https://youtu.be/i72wRvPw_ik"},
{"Romeo and Juliet","Franco Zeffirelli","2h","7.6","Forbidden love between rival families.","https://youtu.be/4VBsi0VxiLg"},
{"Her","Spike Jonze","2h 6m","8.0","A man falls in love with an AI.","https://youtu.be/WzV6mXIOVl4"},
{"Blue Valentine","Derek Cianfrance","1h 52m","7.4","A raw look at a relationship.","https://youtu.be/aILx69WrRhQ"},
{"Call Me By Your Name","Luca Guadagnino","2h 12m","7.8","A summer romance in Italy.","https://youtu.be/Z9AYPxH5NTM"}
};
Movie horror[10] = {
{"The Conjuring","James Wan","1h 52m","7.5","Paranormal investigators face a dark force.","https://youtu.be/k10ETZ41q5o"},
{"Hereditary","Ari Aster","2h 7m","7.3","A family haunted by a terrifying legacy.","https://youtu.be/V6wWKNij_1M"},
{"It","Andy Muschietti","2h 15m","7.3","A shape-shifting clown terrorizes children.","https://youtu.be/xKJmEC5ieOk"},
{"The Exorcist","William Friedkin","2h 2m","8.1","A young girl becomes possessed.","https://youtu.be/YDGw1MTEe9k"},
{"Insidious","James Wan","1h 43m","6.8","A family enters a dark spirit realm.","https://youtu.be/zuZnRUcoWos"},
{"The Nun","Corin Hardy","1h 36m","5.3","A demonic entity stalks a convent.","https://youtu.be/pzD9zGcUNrw"},
{"Sinister","Scott Derrickson","1h 50m","6.8","Disturbing home videos reveal evil.","https://youtu.be/_kbQAJR9YWQ"},
{"The Ring","Gore Verbinski","1h 55m","7.1","A cursed videotape kills in seven days.","https://youtu.be/yzR2GY-ew8I"},
{"Halloween","John Carpenter","1h 31m","7.7","A masked killer stalks babysitters.","https://youtu.be/T5ke9IPTIJQ"},
{"The Babadook","Jennifer Kent","1h 34m","6.8","A sinister book haunts a family.","https://youtu.be/k5WQZzDRVtw"}
};
Movie scifi[10] = {
{"Interstellar","Christopher Nolan","2h 49m","8.7","A space mission to save humanity.","https://youtu.be/zSWdZVtXT7E"},
{"Inception","Christopher Nolan","2h 28m","8.8","A thief steals secrets through dreams.","https://youtu.be/YoHD9XEInc0"},
{"The Matrix","Wachowskis","2h 16m","8.7","Reality is revealed as a simulation.","https://youtu.be/vKQi3bBA1y8"},
{"Avatar","James Cameron","2h 42m","7.8","A human joins an alien world.","https://youtu.be/5PSNL1qE6VY"},
{"Blade Runner 2049","Denis Villeneuve","2h 44m","8.0","A replicant uncovers a hidden truth.","https://youtu.be/gCcx85zbxz4"},
{"Arrival","Denis Villeneuve","1h 56m","7.9","Humans attempt alien communication.","https://youtu.be/tFMo3UJ4B4g"},
{"Gravity","Alfonso Cuaron","1h 31m","7.7","Survival in space.","https://youtu.be/OiTiKOy59o4"},
{"Dune","Denis Villeneuve","2h 35m","8.0","Power struggle on a desert planet.","https://youtu.be/n9xhJrPXop4"},
{"Ex Machina","Alex Garland","1h 48m","7.7","An AI challenges human morality.","https://youtu.be/EoQuVnKhxaM"},
{"Minority Report","Steven Spielberg","2h 25m","7.6","Crimes are stopped before happening.","https://youtu.be/lG7DGMgfOb8"}
};
Movie comedy[10] = {
{"3 Idiots","Rajkumar Hirani","2h 50m","8.4","Friends challenge the education system.","https://youtu.be/K0eDlFX9GMc"},
{"PK","Rajkumar Hirani","2h 33m","8.1","An alien questions religion.","https://youtu.be/SOXWc32k4zA"},
{"Hangover","Todd Phillips","1h 40m","7.7","Friends retrace a wild night.","https://youtu.be/tcdUhdOlz9M"},
{"Superbad","Greg Mottola","1h 53m","7.6","Teens chase one last crazy night.","https://youtu.be/MNpoTxeydiY"},
{"Home Alone","Chris Columbus","1h 43m","7.7","A kid defends his house.","https://youtu.be/jEDaVHmw7r4"},
{"Step Brothers","Adam McKay","1h 38m","6.9","Two grown men act like kids.","https://youtu.be/CewglxElBK0"},
{"The Mask","Chuck Russell","1h 41m","6.9","A man gains cartoon powers.","https://youtu.be/LZl69yk5lEY"},
{"Mr Bean's Holiday","Steve Bendelack","1h 30m","6.4","Mr Bean travels Europe.","https://youtu.be/9kV2K9t9Y5U"},
{"Rush Hour","Brett Ratner","1h 38m","7.0","Two cops clash cultures.","https://youtu.be/JMiFsFQcFLE"},
{"Dumb and Dumber","Farrelly Bros","1h 47m","7.3","Two idiots on a road trip.","https://youtu.be/l13yPhimE3o"}
};
Movie action[10] = {
{"John Wick","Chad Stahelski","1h 41m","7.4","A retired hitman seeks revenge.","https://youtu.be/2AUmvWm5ZDQ"},
{"Mad Max Fury Road","George Miller","2h","8.1","A relentless desert chase.","https://youtu.be/hEJnMQG9ev8"},
{"Gladiator","Ridley Scott","2h 35m","8.5","A general seeks revenge.","https://youtu.be/owK1qxDselE"},
{"Die Hard","John McTiernan","2h 12m","8.2","A cop fights terrorists.","https://youtu.be/jaJuwKCmJbY"},
{"Mission Impossible","Brian De Palma","1h 50m","7.1","A spy is framed.","https://youtu.be/Ohws8y572KE"},
{"Avengers","Joss Whedon","2h 23m","8.0","Heroes unite to save Earth.","https://youtu.be/eOrNdBpGMv8"},
{"The Dark Knight","Christopher Nolan","2h 32m","9.0","Batman faces the Joker.","https://youtu.be/EXeTwQWrcwY"},
{"Skyfall","Sam Mendes","2h 23m","7.8","Bond faces his past.","https://youtu.be/6kw1UVovByw"},
{"Rambo","Ted Kotcheff","1h 33m","7.7","A veteran fights injustice.","https://youtu.be/IAqLKlxY3Eo"},
{"Terminator 2","James Cameron","2h 17m","8.6","A cyborg protects humanity.","https://youtu.be/CRRlbK5w8AE"}
};

int main() {
    int genre, choice;

    printf("🎬 MovieMate by prajwal-sameer 🎬\n\n");
    printf("Select Genre:\n");
    printf("1. Romance\n2. Horror\n3. Sci-Fi\n4. Comedy\n5. Action\n");
    printf("Enter choice: ");
    scanf("%d", &genre);

    Movie *selected;

    if (genre == 1) selected = romance;
    else if (genre == 2) selected = horror;
    else if (genre == 3) selected = scifi;
    else if (genre == 4) selected = comedy;
    else if (genre == 5) selected = action;
    else {
        printf("Invalid genre!\n");
        return 0;
    }

    printf("\nMovies:\n");
    for (int i = 0; i < 10; i++)
        printf("%d. %s\n", i + 1, selected[i].name);

    printf("\nSelect movie: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 10) {
        printf("Invalid choice!\n");
        return 0;
    }

    Movie m = selected[choice - 1];

    printf("\n🎥 Movie Details\n");
    printf("Name      : %s\n", m.name);
    printf("Director  : %s\n", m.director);
    printf("Runtime   : %s\n", m.runtime);
    printf("IMDb      : %s\n", m.rating);
    printf("About     : %s\n", m.description);
    printf("Trailer   : %s\n", m.trailer);

    return 0;
}

