"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function greet(person = "Unknown") {
    console.log(`Hi there, ${person}!`);
}
const entry = {
    firstName: "Hatsune",
    lastName: "Miku",
    favoritePokemon: "Meowscarada",
    pokedexEntry: 908
};
greet(entry.firstName);
//# sourceMappingURL=user.js.map