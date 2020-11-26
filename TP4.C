void setup()
{
  pinMode(2, OUTPUT); // La pin 2 de la led verte du premier feux 
  pinMode(3, OUTPUT); // La pin 3 de la led orange du premier feux 
  pinMode(4, OUTPUT); // La pin 4 de la led rouge du premier feux 
  pinMode(5, OUTPUT); // La pin 5 de la led verte du deuxième feux 
  pinMode(6, OUTPUT); // La pin 6 de la led orange du deuxième feux 
  pinMode(7, OUTPUT); // La pin 7 de la led rouge du deuxième feux 
  pinMode(8, INPUT);  // La pin 8 du bouton poussoir
}

void loop()
{
  int bp=digitalRead(8); // déclaration de la variable du bouton poussoir
  if (bp==0) // si le bouton poussoir est égale à 0
  {
  digitalWrite(3, HIGH); // je doit allumer le feux orange du premier feux
  digitalWrite(6, HIGH); // je doit allumer le feux orange du deuxième feux
  delay(1000); // il doive rester allumer durant 1s econde
  digitalWrite(3, LOW); // je doit étendre le feux orange du premier feux
  digitalWrite(6, LOW); // je doit éteindre le feux orange du deuxième feux
  delay(1000); // il doive rester éteint durant 1s econde
  }
  else // sinon cela veux dire que le feux est à 1 se qui veux dire
  {
  digitalWrite(2, HIGH); // que le verts du premier feux s'allume
  digitalWrite(7, HIGH); // que le rouge du deuxième feux s'allume
  delay(45000); // il reste allumer durant 45 seconde
  digitalWrite(2, LOW); // la led verte du premier feux s'eteint
  digitalWrite(3, HIGH);// la led orange s'allume
  delay(10000); // cette action dure 10 seconde
  digitalWrite(3, LOW); // après les 10 seconde la led orange du premier feux seteint 
  digitalWrite(7, LOW); // et la led rouge doit aussi s'éteindre
  digitalWrite(4, HIGH); // ce qui fait que la led rouge du premier feux s'allume
  digitalWrite(5, HIGH); // et la led verte du deuxième feux s'allume
  delay(45000); // cette action dure 45 seconde
  digitalWrite(5, LOW); // la led verte du deuxième feux s'éteint
  digitalWrite(6, HIGH); // la led orange du deuxième feux s'allume
  delay(10000); // cette action dure 10 seconde
  digitalWrite(4, LOW); // après les 10 seconde la led rouge du prmier feux s'éteint
  digitalWrite(6, LOW); // la led orange du deuxième s'éteint
  }
}
