function greet (person: string = "Unknown"): void{
    console.log(`Hi there, ${person}!`);
}

type Person = {
    firstName: string;
    lastName: string;
    favoritePokemon: string;
    pokedexEntry: number;
};

const entry: Person = {
    firstName: "Hatsune",
    lastName: "Miku",
    favoritePokemon: "Meowscarada",
    pokedexEntry: 908
};

greet(entry.firstName);