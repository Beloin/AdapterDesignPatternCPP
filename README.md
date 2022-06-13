# Adapter Pattern

Nós usaremos adaptadores de Objetos em nosso exemplo.

## Ideia:

Um programa que recebe dados de diversos Bancos/APIs externas e traduz isso para
um só cliente. Um "Catálogo" de produtos que demonstra o preço mais barato, a
localização mais próxima ou então a qualidade.

## Dissertação

Muitas pessoas, todos os dias já se depararam com um produto extremamente caro em um supermercado, mas que antes já
tinha visto um semelhante (se não o igual) muito mais barato em outro
estabelecimento. Ou já encontraram um produto que não parece mais o mesmo,
sua qualidade baixou, ou não possui mais o sabor que tinha antes.
Com o intuito de modificar os hábitos de compra, nossa empresa apresentará
uma solução completamente inovadora para facilitar a compra e comparação
de produtos enquanto você está na plataforma, ou lugar de compra.

OBS: Para a facilidade da criação dessa ferramenta, ignoramos o conceito de 
pesquisa e ordenação dedicada (Por preço, localização,  etc...).
OBS2: Com o mesmo intuito, iremos instanciar os "adaptees" dentro das próprias classes adaptadoras.

## Código:

ProductSearch:
 - makeSearch(string keyword)

### Temos várias fontes:

CometaSource:
 - searchDatabase(string keyword, string apikey)

ViaSulSource:
 - queryProducts(string keyword)

SaoLuizSource:
 - search(string keyword, int limit, int page)

PaodeAcucarSource:
 - searchDb(string keyword, double getMany)

CarnaubaSource ...

### Para isso, precisaremos de um adaptador que tenha uma interface Global

SearchAdapter:
 - search(string keyword)

Sendo assim, teremos um adaptador para cada item. Esse é o problema que o adapter
traz, vai duplicar nossa quantidade de Classes, porém soluciona o problema 
de ter que fazer o código dfepender de múltiplas interfaces.

### Classes adicionais:

Product:
 - float price
 - string name
 - string localization
 - float quality // Entre 0 e 5