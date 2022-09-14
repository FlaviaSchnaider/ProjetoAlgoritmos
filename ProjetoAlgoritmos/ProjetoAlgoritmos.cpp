#include <iostream>
using namespace std;

int main()
{
	float escolha;

	// Introdução
	cout << "Bem vindo ao The Last Night! \n";
	cout << "Este eh um jogo de escolhas, baseado na historia de um apocalipse. \n";
	cout << "O final da sua historia vai depender das escolhas que voce ira fazer. Quando chegar o momento de realizar uma escolha, digite o numero que deseja. \n";
	cout << "Ex: 1 para a primeira escolha, 2 para a segunda escolha e 3 para a terceira escolha. Algumas escolhas terao opcao unica. \n";
	cout << "Bom jogo! \n";
	cout << "\n";
	cout << "Ha pouco mais de um ano, o mundo virou de cabeca pra baixo, e os mortos começaram andar entre os vivos. \n";
	cout << "Nao demorou muito para voce perceber que a cidade se tornou o pior lugar para ficar, a concentracao de pessoas foi um alvo facil e logo hordas \n";
	cout << "de infectados haviam tomado conta das ruas. \n";
	cout << "No inicio de tudo, ficar abrigado em sua casa parecia a melhor opcao, ate que a comida ficou escassa e o som dos infectados cercando o lugar dia \n";
	cout << "e noite ficou impossivel de aguentar. \n";
	cout << "Assim que conseguiu, voce juntou o necessario, entrou no seu carro e dirigiu sem rumo, tentando fugir do pesadelo que te cercou inesperadamente. \n";
	cout << "Agora, voce esta caminhando pela autoestrada. Nenhuma pessoa a vista, somente carros abandonados e arvores por todo lado. \n";
	cout << "Fazem dois dias desde que um infectado cruzou seu caminho, mas voce sabe que sua sorte nao vai durar por muito mais tempo. \n";
	cout << "Afinal, eles estao por todo lado. Alguns metros a frente, uma abertura entre as arvores chama a sua atencao.\n";
	cout << "Chegando mais perto, voce consegue ver uma estreita, porem razoavelmente longa, estrada de chao que leva a uma pequena casa no pico de um morro. \n";
	cout << "Olhando adiante para a autoestrada, voce percebe que estava quase chegando a uma interseccao, mas desconhece para onde cada caminho o levaria. \n";
	cout << "A partir desse ponto, existem duas opcoes : \n";

	cout << "\n";
	cout << "Escolha 1: Continuar na autoestrada\n";
	cout << "Escolha 2: Investigar a casa\n";

	cin >> escolha;
	cout << "\n";

	// Escolha 1: Continuar na autoestrada
	if (escolha == 1) {
		cout << "Escolha 1: Continuar na autoestrada \n";
		cout << "Decidindo que poderia ser muito arriscado ir ate a casa e acabar encontrando algum infectado dentro ou, ainda pior, acabar invadindo o \n";
		cout << "abrigo de alguém, você segue em frente pela autoestrada.Chegar ate a intersecção vai ter que ser um plano para o dia seguinte, entretanto, \n";
		cout << "ja que o sol está se pondo e perambular sozinho durante a noite não é uma boa ideia. Você vê um trailer alguns metros à frente, estacionado \n";
		cout << "diagonalmente nas vias triplas. Considerando que você tambem precisa procurar suprimentos, passar a noite ali eh sua melhor opcao. Ao se \n";
		cout << "aproximar, voce testa a porta do trailer e descobre que está trancada. \n";
		cout << "Escolha 1: entrar pela janela \n";
		cout << "Escolha 2: escalar o trailer e entrar pela claraboia \n";
		cout << "\n";

		cin >> escolha;

		if (escolha == 1) {
			cout << "Escolha 1(entrar pela janela): Para sua sorte, uma das janelas do trailer havia sido deixada meio aberta. \n";
			cout << "Ao entrar, sua mochila eh colocada de lado para que voce possa explorar o pequeno espaco. \n";
			cout << "Dois alimentos enlatados, algumas roupas e uma garrafa de agua sao tudo de valor que pode ser encontrado. \n";
			cout << "Alem das potenciais armas, eh claro. Voce encontra uma faca de caca bem afiada, que pode substituir a faca velha \n";
			cout << "e usada que voce tinha, e algumas ferramentas, dentre elas uma chave inglesa grande. A pequena cama dentro do \n";
			cout << "trailer eh o lugar mais confortavel em que voce deitou desde muito tempo, e logo voce entra em um sono pesado. \n";
			cout << "Sono tao pesado este, que voce so acorda quando o dia ja esta claro, escutando os grunhidos que acompanham o som de \n";
			cout << "unhas raspando pelo metal do trailer. Infectados. Haviam cinco deles cercando seu trailer. Seu coracao comeca a bater mais rapido. \n";
			cout << "Pior do que o som perturbador eh o cheiro deles. A podridao da carne morta te da ansia de vomito e dispara todos os sinais de alerta \n";
			cout << "no seu cerebro. Imediatamente adrenalina comeca a correr pelo seu sangue e voce procura a arma mais proxima. \n";
			cout << "\n";
			cout << "Escolha 1: pegar a faca de caca \n";
			cout << "Escolha 2: pegar chave inglesa \n";
			cout << "\n";

			cin >> escolha;
			cout << "\n";

			// escolhe faca de caça
			if (escolha == 1) {
				cout << "Escolha 1 (pegar a faca de caça): Em um movimento a faca de caça está na sua mão.Você olha pelas janelas do trailer, do lado esquerdo estão dois \n";
				cout << "infectados, sendo um deles do pior tipo: com uma audição super aguçada, já que não tem mais a capacidade de enxergar, e capaz de correr tão \n";
				cout << "rápido quanto uma pessoa.Do outro lado do trailer, haviam três infectados, entre eles outro dos rápidos.Você se pergunta o que atraiu eles até ali. \n";
				cout << "Sua resposta logo chega a sua percepção, quando você nota o pequeno penduricalho de metal colocado no retrovisor, que balançava com o vento \n";
				cout << "entrando pela claraboia e emitia sons agudos.Como é muito arriscado sair do trailer para enfrentar os infectados, você precisa conseguir atacá-los \n";
				cout << "sem que eles consigam te alcançar. \n";
				cout << "\n";
				cout << "Escolha 1: comecar pelo lado direito \n"; // Escolha 1.1 (faca de caça + começar pelo lado direito)
				cout << "Escolha 2: comecar pelo lado esquerdo \n"; //Escolha 1.2 (faca de caça + começar pelo lado esquerdo)
				cout << "\n";

				cin >> escolha;
				cout << "\n";

				// faca de caça +  lado direito
				if (escolha == 1) {
					cout << "Escolha 1 (faca de caca + comecar pelo lado direito): O melhor jeito de atacar os infectados sem sair do trailer eh usando as janelas ao seu favor. \n";
					cout << "Voce segura a faca em uma mao e pega a corda que voce mantem dentro da mochila. \n";
					cout << "Comecando pelo lado com mais infectados, voce abre a janela mais proxima do infectado do tipo mais perigoso e, \n";
					cout << "assim como havia previsto, logo as garras dele tentam te alcancar. \n";
					cout << "Voce usa a corda para prender os bracos dele juntos e os empurra contra a lateral da janela, o que te da espaco para  \n";
					cout << "se aproximar e mirar sua faca na direcao do cerebro do infectado, dando um golpe unico e certeiro. \n";
					cout << "Logo em seguida, os outros dois tentam te alcancar e uma deles consegue rasgar a manga da sua camisa. \n";
					cout << "Por sorte, sua pele fica intacta e logo voce tem uma faca cheia de sangue e tres corpos no chao. \n";
					cout << "Com o outro lado do trailer voce tem menos dificuldades. O som agoniante dos infectados finalmente cessou, \n";
					cout << "deixando somente o som do bater do penduricalho. O ar, no entanto, continuou contaminado pelo odor putrido. \n";
					cout << "\n";
					cout << "Escolha 1: tirar o penduricalho e guarda-lo onde nao fara mais barulho \n";
					cout << "Escolha 2: deixar o penduricalho \n";
					cout << "\n";

					cin >> escolha;


					if (escolha == 1) { // tirar o penduricalho
						cout << "escolha 1 (tirar o penduricalho): \n";
						cout << "voce tira o penduricalho do retrovisor do trailer e o guarda dentro de uma gaveta. em seguida, começa a arrumar suas coisas. \n";
						cout << "sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. voce deixa sua faca antiga \n";
						cout << "guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. seu estomago ronca, \n";
						cout << "mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. alguns goles de agua, pelo menos, voce se \n";
						cout << "permite beber. so lhe resta meia garrafa de agua, o que logo sera um problema. quando tudo o que precisa esta guardado, voce joga a \n";
						cout << " mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. o aparelho começa a fazer um chiado, estando em alguma \n";
						cout << "frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. eh incrivel que o radio ainda esteja funcionando, na verdade. \n";
						cout << "a maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
						cout << "ja não ligam mais. esse eh um raro caso. por isso você decide checar as outras frequências de rádio. alguns minutos depois, quando estava prestes \n";
						cout << "a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. repetidamente, a voz diz tais exatas palavras. \n";
						cout << "\n";
						cout << "Escolha 1: seguir as instruções do radio \n";
						cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) { // seguir as instruções do rádio
							cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
							cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
							cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
							cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
							cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
							cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
							cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
							cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
							cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
							cout << "\n";

							cout << "Escolha 1: correr para dentro do posto \n";
							cout << "Escolha 2: correr para dentro do caminhão \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { //correr para dentro do posto
								cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
								cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
								cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
								cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
								cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
								cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
								cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
								cout << "material que deveria ser transparente. \n";
								cout << "\n";
								cout << "Escolha 1: procurar suprimentos \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // procurar suplementos
									cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
									cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
									cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
									cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
									cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
									cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
									cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
									cout << "\n";
									cout << "Escolha 1: pular\n";
									cout << "\n";

									cin >> escolha;

									// FINAL 1:
									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
										cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
										cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
										cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
										cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
							else { // correr para dentro do caminhão
								cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
								cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
								cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
								cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
								cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
								cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
								cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
								cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
								cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

								cout << "Escolha 1: tentar dormir \n";
								cout << "Escolha 2 : passar a noite acordado em vigilia \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // FINAL 1
									cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
									cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
									cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
									cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
									cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
									cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
									cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
									cout << "\n";
									cout << "Escolha 1: pular do caminhao e se esconder \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
										cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
										cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
										cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
										cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
								else { // passar a noite acordado
									cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
									cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
									cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
									cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
									cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
									cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
									cout << "\n";
									cout << "Escolha 1: pular do caminhao e se esconder \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
										cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
										cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
										cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
										cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
						}
					}
					else { // deixar peduricalho
						cout << "escolha 2 (deixar o penduricalho): \n";
						cout << " voce deixa o penduricalho no retrovisor do trailer. nao importa muito se continuar fazendo barulho, ja que logo voce pretende sair dali. \n";
						cout << "em seguida, começa a arrumar suas coisas. sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. \n";
						cout << "voce deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. \n";
						cout << "seu estomago ronca, mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. alguns goles de agua, pelo menos, \n";
						cout << "voce se permite beber. so lhe resta meia garrafa de agua, o que logo sera um problema. quando tudo o que precisa esta guardado, voce joga a mochila \n";
						cout << "por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. o aparelho começa a fazer um chiado, estando em alguma frequencia que \n";
						cout << "ha muito tempo nao eh mais utilizada para fazer transmissões. eh incrivel que o radio ainda esteja funcionando, na verdade. a maioria dos aparelhos \n";
						cout << "que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. esse eh \n";
						cout << "um raro caso. por isso você decide checar as outras frequências de rádio. alguns minutos depois, quando estava prestes a desistir, voce finalmente \n";
						cout << "escuta uma voz dizendo: rodovia 63, usina, abrigo. repetidamente, a voz diz tais exatas palavras. \n";
						cout << "\n";
						cout << "Escolha 1: seguir as instruções do radio \n";
						cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";

						cout << "\n";
						cin >> escolha;

						if (escolha == 1) { // seguir as instruções do rádio
							cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
							cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
							cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
							cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
							cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
							cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
							cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
							cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
							cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
							cout << "\n";

							cout << "Escolha 1: correr para dentro do posto \n";
							cout << "Escolha 2: correr para dentro do caminhão \n";
							cout << "\n";

							cin >> escolha;
							cout << "\n";

							if (escolha == 1) { //correr para dentro do posto
								cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
								cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
								cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
								cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
								cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
								cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
								cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
								cout << "material que deveria ser transparente. \n";
								cout << "\n";
								cout << "Escolha 1: procurar suprimentos \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // procurar suplementos
									cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
									cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
									cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
									cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
									cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
									cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
									cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
									cout << "\n";
									cout << "Escolha 1: pular \n";
									cout << "\n";

									cin >> escolha;

									// FINAL 1:
									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
										cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
										cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
										cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
										cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
							else { // correr para dentro do caminhão
								cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
								cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
								cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
								cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
								cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
								cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
								cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
								cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
								cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

								cout << "Escolha 1: tentar dormir \n";
								cout << "Escolha 2 : passar a noite acordado em vigilia \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // FINAL 1
									cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
									cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
									cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
									cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
									cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
									cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
									cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
									cout << "\n";
									cout << "Escolha 1: pular do caminhao e se esconder \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
										cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
										cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
										cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
										cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
								else { // passar a noite acordado
									cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
									cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
									cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
									cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
									cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
									cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
									cout << "\n";
									cout << "Escolha 1: pular do caminhao e se esconder \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
										cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
										cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
										cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
										cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
						}
						else { // floresta em busca de rio
							cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
							cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
							cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
							cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
							cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
							cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
							cout << "\n";
							cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) {
								cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
								cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
								cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
								cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
								cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
								cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
								cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
								cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
								cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
								cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
								cout << "\n";
							}
						}
					}
				}
			}

			// faca de caca + esquerdo:
			if (escolha == 2) {
				cout << "Escolha 2 (faca de caca + comecar do lado esquerdo): O melhor jeito de atacar os infectados sem sair do trailer eh usando as janelas ao seu favor. \n";
				cout << "Voce segura a faca em uma mao e pega a corda que você mantém dentro da mochila. \n";
				cout << "Comecando pelo lado com menos infectados, você abre a janela mais proxima do infectado do tipo mais perigoso e, assim como havia previsto, \n";
				cout << "logo as garras dele tentam te alcançar. Você usa a corda para prender os braços dele juntos e os empurra contra a lateral da janela, o que te da \n";
				cout << "espaco para se aproximar e mirar sua faca na direcao do cérebro do infectado, dando um golpe unico e certeiro. Logo o proximo infectado esta no chao \n";
				cout << "tambem e voce segue para o lado esquerdo do trailer para fazer a mesma coisa. Deste lado, porem, assim que você abre a janela, dois deles tentam te \n";
				cout << "alcancar e uma deles consegue rasgar a manga da sua camisa. Por sorte, sua pele fica intacta e logo você tem uma faca cheia de sangue e mais \n";
				cout << "tres corpos no chão. O som agoniante dos infectados finalmente cessou, deixando somente o som do bater do penduricalho. O ar, no entanto, \n";
				cout << "continuou contaminado pelo odor putrido. \n";
				cout << "Escolha 1: tirar o penduricalho e guarda-lo onde nao fara mais barulho \n";
				cout << "Escolha 2: deixar o penduricalho \n";
				cout << "\n";

				cin >> escolha;

				if (escolha == 1) { // tirar o penduricalho
					cout << "escolha 1 (tirar o penduricalho): \n";
					cout << "voce tira o penduricalho do retrovisor do trailer e o guarda dentro de uma gaveta. em seguida, começa a arrumar suas coisas. \n";
					cout << "sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. voce deixa sua faca antiga \n";
					cout << "guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. seu estomago ronca, \n";
					cout << "mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. alguns goles de agua, pelo menos, voce se \n";
					cout << "permite beber. so lhe resta meia garrafa de agua, o que logo sera um problema. quando tudo o que precisa esta guardado, voce joga a \n";
					cout << " mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. o aparelho começa a fazer um chiado, estando em alguma \n";
					cout << "frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. eh incrivel que o radio ainda esteja funcionando, na verdade. \n";
					cout << "a maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
					cout << "ja não ligam mais. esse eh um raro caso. por isso você decide checar as outras frequências de rádio. alguns minutos depois, quando estava prestes \n";
					cout << "a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. repetidamente, a voz diz tais exatas palavras. \n";
					cout << "\n";
					cout << "Escolha 1: seguir as instruções do radio \n";
					cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) { // seguir as instruções do rádio
						cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
						cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
						cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
						cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
						cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
						cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
						cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
						cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
						cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
						cout << "\n";

						cout << "Escolha 1: correr para dentro do posto \n";
						cout << "Escolha 2: correr para dentro do caminhão \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) { //correr para dentro do posto
							cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
							cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
							cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
							cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
							cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
							cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
							cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
							cout << "material que deveria ser transparente. \n";
							cout << "\n";
							cout << "Escolha 1: procurar suprimentos \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // procurar suplementos
								cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
								cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
								cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
								cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
								cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
								cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
								cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
								cout << "\n";
								cout << "Escolha 1: pular\n";
								cout << "\n";

								cin >> escolha;

								// FINAL 1:
								if (escolha == 1) {
									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
									cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
									cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
									cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
									cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
						}
						else { // correr para dentro do caminhão
							cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
							cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
							cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
							cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
							cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
							cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
							cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
							cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
							cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

							cout << "Escolha 1: tentar dormir \n";
							cout << "Escolha 2 : passar a noite acordado em vigilia \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // FINAL 1
								cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
								cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
								cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
								cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
								cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
								cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
								cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
								cout << "\n";
								cout << "Escolha 1: pular do caminhao e se esconder \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) {
									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
									cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
									cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
									cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
									cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
							else { // passar a noite acordado
								cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
								cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
								cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
								cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
								cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
								cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
								cout << "\n";
								cout << "Escolha 1: pular do caminhao e se esconder \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) {
									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
									cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
									cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
									cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
									cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
						}
					}
				}
				else {
					cout << "Escolha 2 (deixar o penduricalho): Voce deixa o penduricalho no retrovisor do trailer. Nao importa muito se continuar fazendo barulho, ja que logo voce pretende \n";
					cout << "sair dali.Em seguida, começa a arrumar suas coisas. Sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. Voce \n";
					cout << "deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. Seu estomago ronca, \n";
					cout << "mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe \n";
					cout << "resta meia garrafa de agua, o que logo sera um problema. Quando tudo o que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba \n";
					cout << "derrubando um pequeno radio antigo. O aparelho começa a fazer um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer \n";
					cout << "transmissões.Eh incrivel que o radio ainda esteja funcionando, na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar \n";
					cout << "muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. Esse eh um raro caso.Por isso você decide checar as outras frequências de rádio. \n";
					cout << "Alguns minutos depois, quando estava prestes a desistir, voce finalmente escuta uma voz dizendo : rodovia 63, usina, abrigo.Repetidamente, a voz diz tais exatas palavras. \n";
					cout << "\n";
					cout << "Escolha 1: seguir as instruções do radio \n";
					cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) { // seguir as instruções do rádio
						cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
						cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
						cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
						cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
						cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
						cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
						cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
						cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
						cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
						cout << "\n";

						cout << "Escolha 1: correr para dentro do posto \n";
						cout << "Escolha 2: correr para dentro do caminhão \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) { //correr para dentro do posto
							cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
							cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
							cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
							cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
							cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
							cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
							cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
							cout << "material que deveria ser transparente. \n";
							cout << "\n";
							cout << "Escolha 1: procurar suprimentos \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // procurar suplementos
								cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
								cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
								cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
								cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
								cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
								cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
								cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
								cout << "\n";
								cout << "Escolha 1: pular\n";
								cout << "\n";

								cin >> escolha;

								// FINAL 1:
								if (escolha == 1) {
									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
									cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
									cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
									cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
									cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
						}
						else { // correr para dentro do caminhão
							cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
							cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
							cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
							cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
							cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
							cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
							cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
							cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
							cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

							cout << "Escolha 1: tentar dormir \n";
							cout << "Escolha 2 : passar a noite acordado em vigilia \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // FINAL 1
								cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
								cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
								cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
								cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
								cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
								cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
								cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
								cout << "\n";
								cout << "Escolha 1: pular do caminhao e se esconder \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) {
									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
									cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
									cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
									cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
									cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
							else { // passar a noite acordado
								cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
								cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
								cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
								cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
								cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
								cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
								cout << "\n";
								cout << "Escolha 1: pular do caminhao e se esconder \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) {
									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
									cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
									cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
									cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
									cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
						}
					}
				}
			}

			// escolhe chave inglesa
			else if (escolha == 2) {
				cout << "Escolha 2(pegar a chave inglesa): Em um movimento a chave inglesa esta na sua mao. \n";
				cout << "Voce olha pelas janelas do trailer, do lado esquerdo estao dois infectados, sendo um deles do pior tipo: \n";
				cout << "com uma audicao super agucada, ja que nao tem mais a capacidade de enxergar, e capaz de correr tao rapido quanto uma pessoa. \n";
				cout << "Do outro lado do trailer, haviam tres infectados, entre eles outro dos rapidos. Voce se pergunta o que atraiu eles ate ali. \n";
				cout << "Sua resposta logo chega a sua percepcao, quando voce nota o pequeno penduricalho de metal colocado no retrovisor, que balancava \n";
				cout << "com o vento entrando pela claraboia e emitia sons agudos. Como eh muito arriscado sair do trailer para enfrentar os infectados, \n";
				cout << "voce precisa conseguir ataca-los sem que eles consigam te alcancar. Para isso, somente a chave inglesa nao vai bastar. \n";
				cout << "Voce pega tambem a corda de dentro da sua mochila e sobe pela claraboia para o teto do trailer. \n";
				cout << "\n";
				cout << "Escolha 1: comecar pelo lado direito \n";
				cout << "Escolha 2: comecar pelo lado esquerdo \n";
				cout << "\n";

				cin >> escolha;

				// chave inglesa + lado direito
				if (escolha == 1) {
					cout << "Escolha 1 (chave inglesa + começar do lado direito): Assim que está em cima do trailer, você usa a corda para fazer um nó de forca, deixando um \n";
					cout << "espaço largo o suficiente para conseguir passar a cabeça do infectado.Indo para o lado direito, você primeiro mira a corda na cabeça do infectado sem \n";
					cout << "olhos; o mais perigoso.Assim que a cabeça dele está dentro do laço, você o puxa para cima e termina o trabalho usando a chave inglesa, tendo cuidado \n";
					cout << "para ficar longe do alcance das garras dele.Enquanto repete o processo com os outros dois infectados do tipo comum, os outros infectados do lado \n";
					cout << "esquerdo do trailer são atraídos pelo som e se aproximam.Assim que todos estão devidamente mortos, você desaba em cima do trailer, coberto de sangue \n";
					cout << "e com os braços doloridos por conta da força que teve que fazer erguendo os corpos pela corda.O som agoniante dos infectados finalmente cessou, deixando \n";
					cout << "somente o som do bater do penduricalho.O ar, no entanto, continuou contaminado pelo odor pútrido. \n";
					cout << "\n";
					cout << "Escolha 1: queimar os corpos \n";
					cout << "Escolha 2 : seguir em frente \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) { // queimar os corpos
						cout << "Escolha 1 (queimar os corpos): Colocando suas luvas, para não ter contato com a pele dos infectados, voce sai do trailer e arrasta os corpos para o \n";
						cout << "meio da estrada, longe de outros carros. Assim que os infectados estão em uma pilha, voce entra no trailer e tira o lençol da cama, jogando em cima \n";
						cout << "dos corpos. Entao, pega sua caixa de fosforos e acende um, jogando-o em cima do lençol. Em seguida, nao ha mais tempo a perder. Voce começa a arrumar \n";
						cout << "suas coisas. Sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada \n";
						cout << "na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao \n";
						cout << "vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia \n";
						cout << "garrafa de agua, o que logo sera um problema. Quando tudo o que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba \n";
						cout << "derrubando um pequeno radio antigo. O aparelho começa a fazer um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer \n";
						cout << "transmissões. Eh incrivel que o radio ainda esteja funcionando, na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de \n";
						cout << "funcionar muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras \n";
						cout << "frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. \n";
						cout << "Repetidamente, a voz diz tais exatas palavras. \n";
						cout << "\n";
						cout << "Escolha 1: seguir as instruções do radio \n";
						cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) { // seguir instruções do rádio
							cout << "Escolha 1 (seguir o radio) : A promessa de abrigo nao eh algo que voce pode deixar passar.Em algum momento voce vai ter que encontrar agua, mas \n";
							cout << "a chance de encontrar segurança é prioridade.Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada \n";
							cout << "eh cortada por uma rodovia. Rodovia 63, conforme a placa.Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez \n";
							cout << "quilômetros dali. Deve ser a usina sobre a qual o radio estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao \n";
							cout << "voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode \n";
							cout << "ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado de algum grupo maior.As pegadas continuam conforme voce caminha \n";
							cout << "adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter sido um hotel antes de tudo. Em frente ao posto esta \n";
							cout << "estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto.Voce está olhando naquela direçao com tanta \n";
							cout << "atenção que não percebe a garrafa de vidro no chao.Quando voce percebe, ja chutou ela para longe. O barulho de vidro em atrito com o asfalto eh alto. \n";
							cout << "Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
							cout << "\n";
							cout << "Escolha 1 : correr para dentro do posto \n";
							cout << "Escolha 2 : correr para dentro do caminhão \n";

							cin >> escolha;

							if (escolha == 1) { // correr para dentro do posto
								cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
								cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
								cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
								cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
								cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
								cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
								cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
								cout << "material que deveria ser transparente. \n";
								cout << "\n";
								cout << "Escolha 1: procurar suprimentos \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // procurar suplementos
									cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
									cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
									cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
									cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
									cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
									cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
									cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
									cout << "\n";
									cout << "Escolha 1: pular\n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // FINAL 1
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
										cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
										cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
										cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
										cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
							else { // correr para dentro do caminhão
								cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
								cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
								cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
								cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
								cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
								cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
								cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
								cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
								cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

								cout << "Escolha 1: tentar dormir \n";
								cout << "Escolha 2 : passar a noite acordado em vigilia \n";
								cout << "\n";

								cin >> escolha;

								// FINAL 1:
								if (escolha == 1) {
									cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
									cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
									cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
									cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
									cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
									cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
									cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
									cout << "\n";
									cout << "Escolha 1: pular do caminhao e se esconder \n";
									cout << "\n";

									cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
									cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
									cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
									cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
									cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
								else { // passar a noite acordado
									cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
									cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
									cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
									cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
									cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
									cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
									cout << "\n";
									cout << "Escolha 1: pular do caminhao e se esconder \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) {
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
										cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
										cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
										cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
										cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
						}
					}
					else if (escolha == 2) { // seguir em frente
						cout << "Escolha 2 (seguir em frente): Voce deixa os corpos dos infectados onde estão e começa a arrumar suas coisas. Sua camisa ficou ensanguentada, entao voce \n";
						cout << "a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa \n";
						cout << "que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro \n";
						cout << "dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia garrafa de agua, o que logo sera um problema. Quando tudo o \n";
						cout << "que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. O aparelho começa a fazer \n";
						cout << "um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. Eh incrivel que o radio ainda esteja funcionando, \n";
						cout << "na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
						cout << "ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, \n";
						cout << "voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. Repetidamente, a voz diz tais exatas palavras. \n";
						cout << "\n";
						cout << "Escolha 1: seguir as instruções do radio \n";
						cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							if (escolha == 1) { // radio
								cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
								cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
								cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
								cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
								cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
								cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
								cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
								cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
								cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
								cout << "\n";

								cout << "Escolha 1: correr para dentro do posto \n";
								cout << "Escolha 2: correr para dentro do caminhão \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { //correr para dentro do posto
									cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
									cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
									cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
									cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
									cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
									cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
									cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
									cout << "material que deveria ser transparente. \n";
									cout << "\n";
									cout << "Escolha 1: procurar suprimentos \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // procurar suplementos
										cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
										cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
										cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
										cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
										cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
										cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
										cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
										cout << "\n";
										cout << "Escolha 1: pular\n";
										cout << "\n";

										cin >> escolha;

										// FINAL 1:
										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
											cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
											cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
											cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
											cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
								else {// correr para dentro do caminhão
									cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
									cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
									cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
									cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
									cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
									cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
									cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
									cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
									cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

									cout << "Escolha 1: tentar dormir \n";
									cout << "Escolha 2 : passar a noite acordado em vigilia \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // FINAL 1
										cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
										cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
										cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
										cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
										cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
										cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
										cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
										cout << "\n";
										cout << "Escolha 1: pular do caminhao e se esconder \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
											cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
											cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
											cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
											cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
									else { // passar a noite acordado
										cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
										cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
										cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
										cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
										cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
										cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
										cout << "\n";
										cout << "Escolha 1: pular do caminhao e se esconder \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
											cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
											cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
											cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
											cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
							}
							else { // floresta em busca de rio
								cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
								cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
								cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
								cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
								cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
								cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
								cout << "\n";
								cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) {
									cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
									cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
									cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
									cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
									cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
									cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
									cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
									cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
									cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
									cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
									cout << "\n";
								}
							}
						}
					}
				}
				// (chave inglesa + comecar do lado esquerdo)				
				else if (escolha == 2) {
					cout << "Escolha 2 (chave inglesa + comecar do lado esquerdo): Assim que está em cima do trailer, você usa a corda para fazer um no de forca,  \n";
					cout << "deixando um espaço largo o suficiente para conseguir passar a cabeça do infectado. Indo para o lado esquerdo, voce primeiro mira a corda  \n";
					cout << "na cabeça do infectado sem olhos; o mais perigoso. Assim que a cabeça dele está dentro do laco, você o puxa para cima e termina o trabalho  \n";
					cout << "usando a chave inglesa, tendo cuidado para ficar longe do alcance das garras dele. Enquanto repete o processo com o infectado do tipo comum,  \n";
					cout << "os outros infectados do lado esquerdo do trailer são atraídos pelo som e se aproximam. Assim que todos estão devidamente mortos, você desaba  \n";
					cout << "em cima do trailer, coberto de sangue e com os braços doloridos por conta da força que teve que fazer erguendo os corpos pela corda.  \n";
					cout << "O som agoniante dos infectados finalmente cessou, deixando somente o som do bater do penduricalho.O ar, no entanto, continuou contaminado  \n";
					cout << "pelo odor putrido.  \n";
					cout << "\n";
					cout << "Escolha 1: queimar os corpos \n";
					cout << "Escolha 2 : seguir em frente \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) {
						cout << "Escolha 1 (queimar os corpos): Colocando suas luvas, para não ter contato com a pele dos infectados, voce sai do trailer e arrasta os corpos para o \n";
						cout << "meio da estrada, longe de outros carros. Assim que os infectados estão em uma pilha, voce entra no trailer e tira o lençol da cama, jogando em cima \n";
						cout << "dos corpos. Entao, pega sua caixa de fosforos e acende um, jogando-o em cima do lençol. Em seguida, nao ha mais tempo a perder. Voce começa a arrumar \n";
						cout << "suas coisas. Sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada \n";
						cout << "na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao \n";
						cout << "vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia \n";
						cout << "garrafa de agua, o que logo sera um problema. Quando tudo o que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba \n";
						cout << "derrubando um pequeno radio antigo. O aparelho começa a fazer um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer \n";
						cout << "transmissões. Eh incrivel que o radio ainda esteja funcionando, na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de \n";
						cout << "funcionar muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras \n";
						cout << "frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. \n";
						cout << "Repetidamente, a voz diz tais exatas palavras. \n";
						cout << "\n";
						cout << "Escolha 1: seguir as instruções do radio \n";
						cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
						cout << "\n";

						cin >> escolha;
						cout << "\n";

						if (escolha == 1) { // radio
							cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
							cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
							cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
							cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
							cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
							cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
							cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
							cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
							cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";


							cout << "Escolha 1: correr para dentro do posto \n";
							cout << "Escolha 2: correr para dentro do caminhão \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // correr para dentro do posto
								cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
								cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
								cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
								cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
								cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
								cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
								cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
								cout << "material que deveria ser transparente. \n";
								cout << "\n";
								cout << "Escolha 1: procurar suprimentos \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // procurar suplementos
									cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
									cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
									cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
									cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
									cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
									cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
									cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
									cout << "\n";
									cout << "Escolha 1: pular\n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // FINAL 1
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
										cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
										cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
										cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
										cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
						}
						else { // floresta em busca de rio
							cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
							cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
							cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
							cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
							cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
							cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
							cout << "\n";
							cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
							cout << "\n";

							cin >> escolha;

							// FINAL 2:
							if (escolha == 1) {
								cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
								cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
								cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
								cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
								cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
								cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
								cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
								cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
								cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
								cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
								cout << "\n";
							}
						}
					}
					else if (escolha == 2) {
						cout << "Escolha 2 (seguir em frente): Voce deixa os corpos dos infectados onde estão e começa a arrumar suas coisas. Sua camisa ficou ensanguentada, entao voce \n";
						cout << "a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa \n";
						cout << "que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro \n";
						cout << "dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia garrafa de agua, o que logo sera um problema. Quando tudo o \n";
						cout << "que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. O aparelho começa a fazer \n";
						cout << "um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. Eh incrivel que o radio ainda esteja funcionando, \n";
						cout << "na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
						cout << "ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, \n";
						cout << "voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. Repetidamente, a voz diz tais exatas palavras. \n";
						cout << "Escolha 1: seguir as instruções do radio \n";
						cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) { // radio
							cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
							cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
							cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
							cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
							cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
							cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
							cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
							cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
							cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";


							cout << "Escolha 1: correr para dentro do posto \n";
							cout << "Escolha 2: correr para dentro do caminhão \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // correr para dentro do posto
								cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
								cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
								cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
								cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
								cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
								cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
								cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
								cout << "material que deveria ser transparente. \n";
								cout << "\n";
								cout << "Escolha 1: procurar suprimentos \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // procurar suplementos
									cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
									cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
									cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
									cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
									cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
									cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
									cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
									cout << "\n";
									cout << "Escolha 1: pular\n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // FINAL 1
										cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
										cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
										cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
										cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
										cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
						}
					}
					else { // floresta em busca de rio
						cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
						cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
						cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
						cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
						cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
						cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
						cout << "\n";
						cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
						cout << "\n";

						cin >> escolha;

						cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
						cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
						cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
						cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
						cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
						cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
						cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
						cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
						cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
						cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
						cout << "\n";
					}
				}
				/////////////////////////////////////////////////////////////////////////////////////
				else {
					cout << "Escolha 2 (escalar o trailer e entrar pela claraboia): Uma pequena escada atrás do trailer facilita a sua subida ate o teto do automovel e, \n";
					cout << "para sua sorte, a claraboia ali localizada havia sido deixada entreaberta, facilitando sua entrada no trailer. Ao entrar, sua mochila eh \n";
					cout << "colocada de lado para que voce possa explorar o pequeno espaco. Dois alimentos enlatados, algumas roupas e uma garrafa de aua sao tudo de \n";
					cout << "valor que pode ser encontrado. Alem das potenciais armas, eh claro. Você encontra uma faca de caca bem afiada, que pode substituir a faca \n";
					cout << "velha e usada que voce tinha, e algumas ferramentas, dentre elas uma chave inglesa grande. A pequena cama dentro do trailer eh o lugar mais \n";
					cout << "confortavel em que você deitou desde muito tempo, e logo voce entra em um sono pesado. Sono tao pesado este, que você so acorda quando o dia \n";
					cout << "ja está claro, escutando os grunhidos que acompanham o som de unhas raspando pelo metal do trailer. Infectados. Haviam cinco deles cercando \n";
					cout << "seu trailer. Seu coracao comeca a bater mais rapido. Pior do que o som perturbador eh o cheiro deles. A podridao da carne morta te da ansia de \n";
					cout << "vomito e dispara todos os sinais de alerta no seu cérebro. Imediatamente adrenalina comeca a correr pelo seu sangue e você procura a arma mais \n";
					cout << "próxima. \n";

					cout << "Escolha 1 : pegar a faca de caça \n";
					cout << "Escolha 2 : pegar a chave inglesa \n";
					cout << "\n";

					cin >> escolha;
					cout << "\n";

					// escolhe faca de caça
					if (escolha == 1) {
						cout << "Escolha 1 (pegar a faca de caça): Em um movimento a faca de caça está na sua mão.Você olha pelas janelas do trailer, do lado esquerdo estão dois \n";
						cout << "infectados, sendo um deles do pior tipo: com uma audição super aguçada, já que não tem mais a capacidade de enxergar, e capaz de correr tão \n";
						cout << "rápido quanto uma pessoa.Do outro lado do trailer, haviam três infectados, entre eles outro dos rápidos.Você se pergunta o que atraiu eles até ali. \n";
						cout << "Sua resposta logo chega a sua percepção, quando você nota o pequeno penduricalho de metal colocado no retrovisor, que balançava com o vento \n";
						cout << "entrando pela claraboia e emitia sons agudos.Como é muito arriscado sair do trailer para enfrentar os infectados, você precisa conseguir atacá-los \n";
						cout << "sem que eles consigam te alcançar. \n";
						cout << "\n";
						cout << "Escolha 1: comecar pelo lado direito \n"; // Escolha 1.1 (faca de caça + começar pelo lado direito)
						cout << "Escolha 2: comecar pelo lado esquerdo \n"; //Escolha 1.2 (faca de caça + começar pelo lado esquerdo)
						cout << "\n";

						cin >> escolha;
						cout << "\n";

						// faca de caça +  lado direito
						if (escolha == 1) {
							cout << "Escolha 1 (faca de caca + comecar pelo lado direito): O melhor jeito de atacar os infectados sem sair do trailer eh usando as janelas ao seu favor. \n";
							cout << "Voce segura a faca em uma mao e pega a corda que voce mantem dentro da mochila. \n";
							cout << "Comecando pelo lado com mais infectados, voce abre a janela mais proxima do infectado do tipo mais perigoso e, \n";
							cout << "assim como havia previsto, logo as garras dele tentam te alcancar. \n";
							cout << "Voce usa a corda para prender os bracos dele juntos e os empurra contra a lateral da janela, o que te da espaco para  \n";
							cout << "se aproximar e mirar sua faca na direcao do cerebro do infectado, dando um golpe unico e certeiro. \n";
							cout << "Logo em seguida, os outros dois tentam te alcancar e uma deles consegue rasgar a manga da sua camisa. \n";
							cout << "Por sorte, sua pele fica intacta e logo voce tem uma faca cheia de sangue e tres corpos no chao. \n";
							cout << "Com o outro lado do trailer voce tem menos dificuldades. O som agoniante dos infectados finalmente cessou, \n";
							cout << "deixando somente o som do bater do penduricalho. O ar, no entanto, continuou contaminado pelo odor putrido. \n";
							cout << "\n";
							cout << "Escolha 1: tirar o penduricalho e guarda-lo onde nao fara mais barulho \n";
							cout << "Escolha 2: deixar o penduricalho \n";
							cout << "\n";

							cin >> escolha;


							if (escolha == 1) { // tirar o penduricalho
								cout << "escolha 1 (tirar o penduricalho): \n";
								cout << "voce tira o penduricalho do retrovisor do trailer e o guarda dentro de uma gaveta. em seguida, começa a arrumar suas coisas. \n";
								cout << "sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. voce deixa sua faca antiga \n";
								cout << "guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. seu estomago ronca, \n";
								cout << "mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. alguns goles de agua, pelo menos, voce se \n";
								cout << "permite beber. so lhe resta meia garrafa de agua, o que logo sera um problema. quando tudo o que precisa esta guardado, voce joga a \n";
								cout << " mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. o aparelho começa a fazer um chiado, estando em alguma \n";
								cout << "frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. eh incrivel que o radio ainda esteja funcionando, na verdade. \n";
								cout << "a maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
								cout << "ja não ligam mais. esse eh um raro caso. por isso você decide checar as outras frequências de rádio. alguns minutos depois, quando estava prestes \n";
								cout << "a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. repetidamente, a voz diz tais exatas palavras. \n";
								cout << "\n";
								cout << "Escolha 1: seguir as instruções do radio \n";
								cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // seguir as instruções do rádio
									cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
									cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
									cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
									cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
									cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
									cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
									cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
									cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
									cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
									cout << "\n";

									cout << "Escolha 1: correr para dentro do posto \n";
									cout << "Escolha 2: correr para dentro do caminhão \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { //correr para dentro do posto
										cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
										cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
										cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
										cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
										cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
										cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
										cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
										cout << "material que deveria ser transparente. \n";
										cout << "\n";
										cout << "Escolha 1: procurar suprimentos \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // procurar suplementos
											cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
											cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
											cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
											cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
											cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
											cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
											cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
											cout << "\n";
											cout << "Escolha 1: pular\n";
											cout << "\n";

											cin >> escolha;

											// FINAL 1:
											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
												cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
												cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
												cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
												cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
									else { // correr para dentro do caminhão
										cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
										cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
										cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
										cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
										cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
										cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
										cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
										cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
										cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

										cout << "Escolha 1: tentar dormir \n";
										cout << "Escolha 2 : passar a noite acordado em vigilia \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // FINAL 1
											cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
											cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
											cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
											cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
											cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
											cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
											cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
											cout << "\n";
											cout << "Escolha 1: pular do caminhao e se esconder \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
												cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
												cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
												cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
												cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
										else { // passar a noite acordado
											cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
											cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
											cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
											cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
											cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
											cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
											cout << "\n";
											cout << "Escolha 1: pular do caminhao e se esconder \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
												cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
												cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
												cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
												cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
								}
							}
							else { // deixar peduricalho
								cout << "escolha 2 (deixar o penduricalho): \n";
								cout << " voce deixa o penduricalho no retrovisor do trailer. nao importa muito se continuar fazendo barulho, ja que logo voce pretende sair dali. \n";
								cout << "em seguida, começa a arrumar suas coisas. sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. \n";
								cout << "voce deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. \n";
								cout << "seu estomago ronca, mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. alguns goles de agua, pelo menos, \n";
								cout << "voce se permite beber. so lhe resta meia garrafa de agua, o que logo sera um problema. quando tudo o que precisa esta guardado, voce joga a mochila \n";
								cout << "por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. o aparelho começa a fazer um chiado, estando em alguma frequencia que \n";
								cout << "ha muito tempo nao eh mais utilizada para fazer transmissões. eh incrivel que o radio ainda esteja funcionando, na verdade. a maioria dos aparelhos \n";
								cout << "que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. esse eh \n";
								cout << "um raro caso. por isso você decide checar as outras frequências de rádio. alguns minutos depois, quando estava prestes a desistir, voce finalmente \n";
								cout << "escuta uma voz dizendo: rodovia 63, usina, abrigo. repetidamente, a voz diz tais exatas palavras. \n";
								cout << "\n";
								cout << "Escolha 1: seguir as instruções do radio \n";
								cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";

								cout << "\n";
								cin >> escolha;

								if (escolha == 1) { // seguir as instruções do rádio
									cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
									cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
									cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
									cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
									cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
									cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
									cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
									cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
									cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
									cout << "\n";

									cout << "Escolha 1: correr para dentro do posto \n";
									cout << "Escolha 2: correr para dentro do caminhão \n";
									cout << "\n";

									cin >> escolha;
									cout << "\n";

									if (escolha == 1) { //correr para dentro do posto
										cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
										cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
										cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
										cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
										cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
										cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
										cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
										cout << "material que deveria ser transparente. \n";
										cout << "\n";
										cout << "Escolha 1: procurar suprimentos \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // procurar suplementos
											cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
											cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
											cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
											cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
											cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
											cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
											cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
											cout << "\n";
											cout << "Escolha 1: pular \n";
											cout << "\n";

											cin >> escolha;

											// FINAL 1:
											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
												cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
												cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
												cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
												cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
									else { // correr para dentro do caminhão
										cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
										cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
										cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
										cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
										cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
										cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
										cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
										cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
										cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

										cout << "Escolha 1: tentar dormir \n";
										cout << "Escolha 2 : passar a noite acordado em vigilia \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // FINAL 1
											cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
											cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
											cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
											cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
											cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
											cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
											cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
											cout << "\n";
											cout << "Escolha 1: pular do caminhao e se esconder \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
												cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
												cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
												cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
												cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
										else { // passar a noite acordado
											cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
											cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
											cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
											cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
											cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
											cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
											cout << "\n";
											cout << "Escolha 1: pular do caminhao e se esconder \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
												cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
												cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
												cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
												cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
								}
								else { // floresta em busca de rio
									cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
									cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
									cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
									cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
									cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
									cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
									cout << "\n";
									cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) {
										cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
										cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
										cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
										cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
										cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
										cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
										cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
										cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
										cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
										cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
						}
					}

					// faca de caca + esquerdo:
					if (escolha == 2) {
						cout << "Escolha 2 (faca de caca + comecar do lado esquerdo): O melhor jeito de atacar os infectados sem sair do trailer eh usando as janelas ao seu favor. \n";
						cout << "Voce segura a faca em uma mao e pega a corda que você mantém dentro da mochila. \n";
						cout << "Comecando pelo lado com menos infectados, você abre a janela mais proxima do infectado do tipo mais perigoso e, assim como havia previsto, \n";
						cout << "logo as garras dele tentam te alcançar. Você usa a corda para prender os braços dele juntos e os empurra contra a lateral da janela, o que te da \n";
						cout << "espaco para se aproximar e mirar sua faca na direcao do cérebro do infectado, dando um golpe unico e certeiro. Logo o proximo infectado esta no chao \n";
						cout << "tambem e voce segue para o lado esquerdo do trailer para fazer a mesma coisa. Deste lado, porem, assim que você abre a janela, dois deles tentam te \n";
						cout << "alcancar e uma deles consegue rasgar a manga da sua camisa. Por sorte, sua pele fica intacta e logo você tem uma faca cheia de sangue e mais \n";
						cout << "tres corpos no chão. O som agoniante dos infectados finalmente cessou, deixando somente o som do bater do penduricalho. O ar, no entanto, \n";
						cout << "continuou contaminado pelo odor putrido. \n";
						cout << "Escolha 1: tirar o penduricalho e guarda-lo onde nao fara mais barulho \n";
						cout << "Escolha 2: deixar o penduricalho \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) { // tirar o penduricalho
							cout << "escolha 1 (tirar o penduricalho): \n";
							cout << "voce tira o penduricalho do retrovisor do trailer e o guarda dentro de uma gaveta. em seguida, começa a arrumar suas coisas. \n";
							cout << "sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. voce deixa sua faca antiga \n";
							cout << "guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. seu estomago ronca, \n";
							cout << "mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. alguns goles de agua, pelo menos, voce se \n";
							cout << "permite beber. so lhe resta meia garrafa de agua, o que logo sera um problema. quando tudo o que precisa esta guardado, voce joga a \n";
							cout << " mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. o aparelho começa a fazer um chiado, estando em alguma \n";
							cout << "frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. eh incrivel que o radio ainda esteja funcionando, na verdade. \n";
							cout << "a maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
							cout << "ja não ligam mais. esse eh um raro caso. por isso você decide checar as outras frequências de rádio. alguns minutos depois, quando estava prestes \n";
							cout << "a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. repetidamente, a voz diz tais exatas palavras. \n";
							cout << "\n";
							cout << "Escolha 1: seguir as instruções do radio \n";
							cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // seguir as instruções do rádio
								cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
								cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
								cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
								cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
								cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
								cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
								cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
								cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
								cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
								cout << "\n";

								cout << "Escolha 1: correr para dentro do posto \n";
								cout << "Escolha 2: correr para dentro do caminhão \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { //correr para dentro do posto
									cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
									cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
									cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
									cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
									cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
									cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
									cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
									cout << "material que deveria ser transparente. \n";
									cout << "\n";
									cout << "Escolha 1: procurar suprimentos \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // procurar suplementos
										cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
										cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
										cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
										cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
										cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
										cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
										cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
										cout << "\n";
										cout << "Escolha 1: pular\n";
										cout << "\n";

										cin >> escolha;

										// FINAL 1:
										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
											cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
											cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
											cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
											cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
								else { // correr para dentro do caminhão
									cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
									cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
									cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
									cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
									cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
									cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
									cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
									cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
									cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

									cout << "Escolha 1: tentar dormir \n";
									cout << "Escolha 2 : passar a noite acordado em vigilia \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // FINAL 1
										cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
										cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
										cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
										cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
										cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
										cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
										cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
										cout << "\n";
										cout << "Escolha 1: pular do caminhao e se esconder \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
											cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
											cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
											cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
											cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
									else { // passar a noite acordado
										cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
										cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
										cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
										cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
										cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
										cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
										cout << "\n";
										cout << "Escolha 1: pular do caminhao e se esconder \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
											cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
											cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
											cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
											cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
							}
						}
						else {
							cout << "Escolha 2 (deixar o penduricalho): Voce deixa o penduricalho no retrovisor do trailer. Nao importa muito se continuar fazendo barulho, ja que logo voce pretende \n";
							cout << "sair dali.Em seguida, começa a arrumar suas coisas. Sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. Voce \n";
							cout << "deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. Seu estomago ronca, \n";
							cout << "mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe \n";
							cout << "resta meia garrafa de agua, o que logo sera um problema. Quando tudo o que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba \n";
							cout << "derrubando um pequeno radio antigo. O aparelho começa a fazer um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer \n";
							cout << "transmissões.Eh incrivel que o radio ainda esteja funcionando, na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar \n";
							cout << "muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. Esse eh um raro caso.Por isso você decide checar as outras frequências de rádio. \n";
							cout << "Alguns minutos depois, quando estava prestes a desistir, voce finalmente escuta uma voz dizendo : rodovia 63, usina, abrigo.Repetidamente, a voz diz tais exatas palavras. \n";
							cout << "\n";
							cout << "Escolha 1: seguir as instruções do radio \n";
							cout << "Escolha 2: entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // seguir as instruções do rádio
								cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
								cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
								cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
								cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
								cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
								cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
								cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
								cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
								cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
								cout << "\n";

								cout << "Escolha 1: correr para dentro do posto \n";
								cout << "Escolha 2: correr para dentro do caminhão \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { //correr para dentro do posto
									cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
									cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
									cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
									cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
									cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
									cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
									cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
									cout << "material que deveria ser transparente. \n";
									cout << "\n";
									cout << "Escolha 1: procurar suprimentos \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // procurar suplementos
										cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
										cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
										cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
										cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
										cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
										cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
										cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
										cout << "\n";
										cout << "Escolha 1: pular\n";
										cout << "\n";

										cin >> escolha;

										// FINAL 1:
										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
											cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
											cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
											cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
											cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
								else { // correr para dentro do caminhão
									cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
									cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
									cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
									cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
									cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
									cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
									cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
									cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
									cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

									cout << "Escolha 1: tentar dormir \n";
									cout << "Escolha 2 : passar a noite acordado em vigilia \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // FINAL 1
										cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
										cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
										cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
										cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
										cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
										cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
										cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
										cout << "\n";
										cout << "Escolha 1: pular do caminhao e se esconder \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
											cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
											cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
											cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
											cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
									else { // passar a noite acordado
										cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
										cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
										cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
										cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
										cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
										cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
										cout << "\n";
										cout << "Escolha 1: pular do caminhao e se esconder \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
											cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
											cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
											cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
											cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
							}
						}
					}

					// escolhe chave inglesa
					else if (escolha == 2) {
						cout << "Escolha 2(pegar a chave inglesa): Em um movimento a chave inglesa esta na sua mao. \n";
						cout << "Voce olha pelas janelas do trailer, do lado esquerdo estao dois infectados, sendo um deles do pior tipo: \n";
						cout << "com uma audicao super agucada, ja que nao tem mais a capacidade de enxergar, e capaz de correr tao rapido quanto uma pessoa. \n";
						cout << "Do outro lado do trailer, haviam tres infectados, entre eles outro dos rapidos. Voce se pergunta o que atraiu eles ate ali. \n";
						cout << "Sua resposta logo chega a sua percepcao, quando voce nota o pequeno penduricalho de metal colocado no retrovisor, que balancava \n";
						cout << "com o vento entrando pela claraboia e emitia sons agudos. Como eh muito arriscado sair do trailer para enfrentar os infectados, \n";
						cout << "voce precisa conseguir ataca-los sem que eles consigam te alcancar. Para isso, somente a chave inglesa nao vai bastar. \n";
						cout << "Voce pega tambem a corda de dentro da sua mochila e sobe pela claraboia para o teto do trailer. \n";
						cout << "\n";
						cout << "Escolha 1: comecar pelo lado direito \n";
						cout << "Escolha 2: comecar pelo lado esquerdo \n";
						cout << "\n";

						cin >> escolha;

						// chave inglesa + lado direito
						if (escolha == 1) {
							cout << "Escolha 1 (chave inglesa + começar do lado direito): Assim que está em cima do trailer, você usa a corda para fazer um nó de forca, deixando um \n";
							cout << "espaço largo o suficiente para conseguir passar a cabeça do infectado.Indo para o lado direito, você primeiro mira a corda na cabeça do infectado sem \n";
							cout << "olhos; o mais perigoso.Assim que a cabeça dele está dentro do laço, você o puxa para cima e termina o trabalho usando a chave inglesa, tendo cuidado \n";
							cout << "para ficar longe do alcance das garras dele.Enquanto repete o processo com os outros dois infectados do tipo comum, os outros infectados do lado \n";
							cout << "esquerdo do trailer são atraídos pelo som e se aproximam.Assim que todos estão devidamente mortos, você desaba em cima do trailer, coberto de sangue \n";
							cout << "e com os braços doloridos por conta da força que teve que fazer erguendo os corpos pela corda.O som agoniante dos infectados finalmente cessou, deixando \n";
							cout << "somente o som do bater do penduricalho.O ar, no entanto, continuou contaminado pelo odor pútrido. \n";
							cout << "\n";
							cout << "Escolha 1: queimar os corpos \n";
							cout << "Escolha 2 : seguir em frente \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) { // queimar os corpos
								cout << "Escolha 1 (queimar os corpos): Colocando suas luvas, para não ter contato com a pele dos infectados, voce sai do trailer e arrasta os corpos para o \n";
								cout << "meio da estrada, longe de outros carros. Assim que os infectados estão em uma pilha, voce entra no trailer e tira o lençol da cama, jogando em cima \n";
								cout << "dos corpos. Entao, pega sua caixa de fosforos e acende um, jogando-o em cima do lençol. Em seguida, nao ha mais tempo a perder. Voce começa a arrumar \n";
								cout << "suas coisas. Sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada \n";
								cout << "na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao \n";
								cout << "vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia \n";
								cout << "garrafa de agua, o que logo sera um problema. Quando tudo o que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba \n";
								cout << "derrubando um pequeno radio antigo. O aparelho começa a fazer um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer \n";
								cout << "transmissões. Eh incrivel que o radio ainda esteja funcionando, na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de \n";
								cout << "funcionar muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras \n";
								cout << "frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. \n";
								cout << "Repetidamente, a voz diz tais exatas palavras. \n";
								cout << "\n";
								cout << "Escolha 1: seguir as instruções do radio \n";
								cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // seguir instruções do rádio
									cout << "Escolha 1 (seguir o radio) : A promessa de abrigo nao eh algo que voce pode deixar passar.Em algum momento voce vai ter que encontrar agua, mas \n";
									cout << "a chance de encontrar segurança é prioridade.Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada \n";
									cout << "eh cortada por uma rodovia. Rodovia 63, conforme a placa.Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez \n";
									cout << "quilômetros dali. Deve ser a usina sobre a qual o radio estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao \n";
									cout << "voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode \n";
									cout << "ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado de algum grupo maior.As pegadas continuam conforme voce caminha \n";
									cout << "adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter sido um hotel antes de tudo. Em frente ao posto esta \n";
									cout << "estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto.Voce está olhando naquela direçao com tanta \n";
									cout << "atenção que não percebe a garrafa de vidro no chao.Quando voce percebe, ja chutou ela para longe. O barulho de vidro em atrito com o asfalto eh alto. \n";
									cout << "Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
									cout << "\n";
									cout << "Escolha 1 : correr para dentro do posto \n";
									cout << "Escolha 2 : correr para dentro do caminhão \n";

									cin >> escolha;

									if (escolha == 1) { // correr para dentro do posto
										cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
										cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
										cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
										cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
										cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
										cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
										cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
										cout << "material que deveria ser transparente. \n";
										cout << "\n";
										cout << "Escolha 1: procurar suprimentos \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // procurar suplementos
											cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
											cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
											cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
											cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
											cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
											cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
											cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
											cout << "\n";
											cout << "Escolha 1: pular\n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) { // FINAL 1
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
												cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
												cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
												cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
												cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
									else { // correr para dentro do caminhão
										cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
										cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
										cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
										cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
										cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
										cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
										cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
										cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
										cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

										cout << "Escolha 1: tentar dormir \n";
										cout << "Escolha 2 : passar a noite acordado em vigilia \n";
										cout << "\n";

										cin >> escolha;

										// FINAL 1:
										if (escolha == 1) {
											cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
											cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
											cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
											cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
											cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
											cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
											cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
											cout << "\n";
											cout << "Escolha 1: pular do caminhao e se esconder \n";
											cout << "\n";

											cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
											cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
											cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
											cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
											cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
										else { // passar a noite acordado
											cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
											cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
											cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
											cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
											cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
											cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
											cout << "\n";
											cout << "Escolha 1: pular do caminhao e se esconder \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) {
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
												cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
												cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
												cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
												cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
								}
							}
							else if (escolha == 2) { // seguir em frente
								cout << "Escolha 2 (seguir em frente): Voce deixa os corpos dos infectados onde estão e começa a arrumar suas coisas. Sua camisa ficou ensanguentada, entao voce \n";
								cout << "a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa \n";
								cout << "que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro \n";
								cout << "dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia garrafa de agua, o que logo sera um problema. Quando tudo o \n";
								cout << "que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. O aparelho começa a fazer \n";
								cout << "um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. Eh incrivel que o radio ainda esteja funcionando, \n";
								cout << "na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
								cout << "ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, \n";
								cout << "voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. Repetidamente, a voz diz tais exatas palavras. \n";
								cout << "\n";
								cout << "Escolha 1: seguir as instruções do radio \n";
								cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) {
									if (escolha == 1) { // radio
										cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
										cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
										cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
										cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
										cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
										cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
										cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
										cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
										cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";
										cout << "\n";

										cout << "Escolha 1: correr para dentro do posto \n";
										cout << "Escolha 2: correr para dentro do caminhão \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { //correr para dentro do posto
											cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
											cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
											cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
											cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
											cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
											cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
											cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
											cout << "material que deveria ser transparente. \n";
											cout << "\n";
											cout << "Escolha 1: procurar suprimentos \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) { // procurar suplementos
												cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
												cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
												cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
												cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
												cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
												cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
												cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
												cout << "\n";
												cout << "Escolha 1: pular\n";
												cout << "\n";

												cin >> escolha;

												// FINAL 1:
												if (escolha == 1) {
													cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
													cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
													cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
													cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
													cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
													cout << "\n";
												}
											}
										}
										else {// correr para dentro do caminhão
											cout << "Escolha 2 (correr para o caminhão): Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o \n";
											cout << "caminhao, os infectados começam a vir em sua direcao. Os mais rapidos vem em disparada, seguindo o som dos seus pes pisando com força no asfalto. Voce correr \n";
											cout << "pela pequena elevação na entrada do posto e, quando chega no caminhao, se joga com força contra a porta. Seu corpo esta quase completamente dentro quando um \n";
											cout << "dos infectados conseguiu chegar até você. Ele segura sua perna e força as unhas contra o tecidos, rasgando o material. Voce sabe que não pode deixar ele chegar \n";
											cout << "na sua pele. Voce usa sua outra perna para acertar a cara dele, pega a faca de caça afiada e acerta bem no pulso do infectado. A carne se separa com o corte e \n";
											cout << "voce fecha a porta do caminhao antes que os outros conseguissem te agarrar também. Com nojo, voce coloca suas luvas antes de soltar a mao ainda agarrada na sua \n";
											cout << "perna. Voce abre um pouco o vidro e joga a mao para fora, finalmente respirando fundo. Nao esta livre do problema, entretanto. O caminhao esta cercado por todos \n";
											cout << "os lados. Mesmo depois que horas se passam e o sol começa a se por, os infectados ainda nao desistiram. Voce deita no pequeno espaco atras do bancos, cobrindo	\n";
											cout << "seus ouvidos com um pano para tentar abafar o som deles batendo contra o caminhao. \n";

											cout << "Escolha 1: tentar dormir \n";
											cout << "Escolha 2 : passar a noite acordado em vigilia \n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) { // FINAL 1
												cout << "Escolha 1 (tentar dormir) : Voce acaba se permitindo cair no sono depois de horas.Se os infectados nao conseguiram entrar no caminhao ate agora, voce acreita que nao \n";
												cout << "vao conseguir chegar ate voce no meio da noite.Seu sono eh perturbado por pesadelos.Varias vezes voce acorda em um pulo, tremendo. Em uma dessas vezes, porem, voce \n";
												cout << "acorda com a solucao para sair dali. Mas o ceu ainda esta escuro. Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. \n";
												cout << "Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no banco do motorista com um sorriso maníaco no rosto.Olhando através do vidro para baixo, \n";
												cout << "por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o \n";
												cout << "freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira o volante e o coloca na rodovia. O caminhao esta prestes a \n";
												cout << "bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
												cout << "\n";
												cout << "Escolha 1: pular do caminhao e se esconder \n";
												cout << "\n";

												cin >> escolha;

												if (escolha == 1) {
													cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha \n";
													cout << "muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho.Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no \n";
													cout << "trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda.Os grandes muros de concreto podem ser visto de longe. O som \n";
													cout << "da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas \n";
													cout << "e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
													cout << "\n";
												}
											}
											else { // passar a noite acordado
												cout << "Escolha 2 (passar a noite acordado): Seus olhos ficam abertos durante a noite inteira. Voce nao consegue se permitir dormir. So porque os infectados nao conseguiram chegar \n";
												cout << "ate voce ainda, nao quer dizer que voce vai dar a chance de te pegarem dormindo. No meio da noite, no entanto, voce pensa na solucao para sair dali. Mas o ceu ainda esta escuro. \n";
												cout << "Novamente voce tenta dormir, dessa vez com uma preocupação a menos, e seu sono é quase imperturbável. Assim que acorda, voce come, bebe um pouco de agua e, entao, volta a sentar no \n";
												cout << "banco do motorista com um sorriso maníaco no rosto. Olhando através do vidro para baixo, por causa da inclinação do terreno onde o caminhao esta estacionado, voce ve os infectados \n";
												cout << "empurrando uns aos outros para tentar chegar ate voce. Sua mao vai ate o freio de mao e o puxa para cima, e assim o caminhao desce o morro atropelando tudo pelo caminho. Voce vira \n";
												cout << "o volante e o coloca na rodovia. O caminhao esta prestes a bater em alguns carros abandonados a frente e voce precisa fazer sua fuga: \n";
												cout << "\n";
												cout << "Escolha 1: pular do caminhao e se esconder \n";
												cout << "\n";

												cin >> escolha;

												if (escolha == 1) {
													cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados foram ha muito tempo \n";
													cout << "deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma dificuldade no trajeto, voce encontra uma placa \n";
													cout << "indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser visto de longe. O som da água caindo te acompanha na viagem. Finalmente, \n";
													cout << "voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de \n";
													cout << "fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
													cout << "\n";
												}
											}
										}
									}
									else { // floresta em busca de rio
										cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
										cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
										cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
										cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
										cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
										cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
										cout << "\n";
										cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) {
											cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
											cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
											cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
											cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
											cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
											cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
											cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
											cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
											cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
											cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
											cout << "\n";
										}
									}
								}
							}
						}
						// (chave inglesa + comecar do lado esquerdo)				
						else if (escolha == 2) {
							cout << "Escolha 2 (chave inglesa + comecar do lado esquerdo): Assim que está em cima do trailer, você usa a corda para fazer um no de forca,  \n";
							cout << "deixando um espaço largo o suficiente para conseguir passar a cabeça do infectado. Indo para o lado esquerdo, voce primeiro mira a corda  \n";
							cout << "na cabeça do infectado sem olhos; o mais perigoso. Assim que a cabeça dele está dentro do laco, você o puxa para cima e termina o trabalho  \n";
							cout << "usando a chave inglesa, tendo cuidado para ficar longe do alcance das garras dele. Enquanto repete o processo com o infectado do tipo comum,  \n";
							cout << "os outros infectados do lado esquerdo do trailer são atraídos pelo som e se aproximam. Assim que todos estão devidamente mortos, você desaba  \n";
							cout << "em cima do trailer, coberto de sangue e com os braços doloridos por conta da força que teve que fazer erguendo os corpos pela corda.  \n";
							cout << "O som agoniante dos infectados finalmente cessou, deixando somente o som do bater do penduricalho.O ar, no entanto, continuou contaminado  \n";
							cout << "pelo odor putrido.  \n";
							cout << "\n";
							cout << "Escolha 1: queimar os corpos \n";
							cout << "Escolha 2 : seguir em frente \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) {
								cout << "Escolha 1 (queimar os corpos): Colocando suas luvas, para não ter contato com a pele dos infectados, voce sai do trailer e arrasta os corpos para o \n";
								cout << "meio da estrada, longe de outros carros. Assim que os infectados estão em uma pilha, voce entra no trailer e tira o lençol da cama, jogando em cima \n";
								cout << "dos corpos. Entao, pega sua caixa de fosforos e acende um, jogando-o em cima do lençol. Em seguida, nao ha mais tempo a perder. Voce começa a arrumar \n";
								cout << "suas coisas. Sua camisa ficou ensanguentada, entao voce a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada \n";
								cout << "na mochila, adicionando a faca de caça e a chave inglesa que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao \n";
								cout << "vai conseguir comer enquanto estiver cercado pelo cheiro dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia \n";
								cout << "garrafa de agua, o que logo sera um problema. Quando tudo o que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba \n";
								cout << "derrubando um pequeno radio antigo. O aparelho começa a fazer um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer \n";
								cout << "transmissões. Eh incrivel que o radio ainda esteja funcionando, na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de \n";
								cout << "funcionar muito meses atras, e os que necessitam de pilha normalmente ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras \n";
								cout << "frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. \n";
								cout << "Repetidamente, a voz diz tais exatas palavras. \n";
								cout << "\n";
								cout << "Escolha 1: seguir as instruções do radio \n";
								cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
								cout << "\n";

								cin >> escolha;
								cout << "\n";

								if (escolha == 1) { // radio
									cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
									cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
									cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
									cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
									cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
									cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
									cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
									cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
									cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";


									cout << "Escolha 1: correr para dentro do posto \n";
									cout << "Escolha 2: correr para dentro do caminhão \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // correr para dentro do posto
										cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
										cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
										cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
										cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
										cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
										cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
										cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
										cout << "material que deveria ser transparente. \n";
										cout << "\n";
										cout << "Escolha 1: procurar suprimentos \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // procurar suplementos
											cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
											cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
											cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
											cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
											cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
											cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
											cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
											cout << "\n";
											cout << "Escolha 1: pular\n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) { // FINAL 1
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
												cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
												cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
												cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
												cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
								}
								else { // floresta em busca de rio
									cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
									cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
									cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
									cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
									cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
									cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
									cout << "\n";
									cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
									cout << "\n";

									cin >> escolha;

									// FINAL 2:
									if (escolha == 1) {
										cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
										cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
										cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
										cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
										cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
										cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
										cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
										cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
										cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
										cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
										cout << "\n";
									}
								}
							}
							else if (escolha == 2) {
								cout << "Escolha 2 (seguir em frente): Voce deixa os corpos dos infectados onde estão e começa a arrumar suas coisas. Sua camisa ficou ensanguentada, entao voce \n";
								cout << "a troca por uma das camisa limpas que encontrou no trailer. Voce deixa sua faca antiga guardada na mochila, adicionando a faca de caça e a chave inglesa \n";
								cout << "que encontrou no trailer como seus novos armamentos. Seu estomago ronca, mas voce sabe que nao vai conseguir comer enquanto estiver cercado pelo cheiro \n";
								cout << "dos infectados. Alguns goles de agua, pelo menos, voce se permite beber. So lhe resta meia garrafa de agua, o que logo sera um problema. Quando tudo o \n";
								cout << "que precisa esta guardado, voce joga a mochila por cima do ombro e nesse movimento acaba derrubando um pequeno radio antigo. O aparelho começa a fazer \n";
								cout << "um chiado, estando em alguma frequencia que ha muito tempo nao eh mais utilizada para fazer transmissões. Eh incrivel que o radio ainda esteja funcionando, \n";
								cout << "na verdade. A maioria dos aparelhos que funcionam na base da eletricidade deixaram de funcionar muito meses atras, e os que necessitam de pilha normalmente \n";
								cout << "ja não ligam mais. Esse eh um raro caso. Por isso você decide checar as outras frequências de rádio. Alguns minutos depois, quando estava prestes a desistir, \n";
								cout << "voce finalmente escuta uma voz dizendo: rodovia 63, usina, abrigo. Repetidamente, a voz diz tais exatas palavras. \n";
								cout << "Escolha 1: seguir as instruções do radio \n";
								cout << "Escolha 2 : entrar na floresta em busca de um rio, pois voce esta quase sem agua \n";
								cout << "\n";

								cin >> escolha;

								if (escolha == 1) { // radio
									cout << "A promessa de abrigo nao eh algo que voce pode deixar passar. Em algum momento voce vai ter que encontrar agua, mas a chance de encontrar segurança é \n";
									cout << "prioridade. Portanto, voce segue adiante pela autoestrada. Assim que voce chega na na intersecçao, a autoestrada eh cortada por uma rodovia. Rodovia 63, \n";
									cout << "conforme a placa. Ainda melhor, a placa também informa sobre uma usina hidroelétrica localizada a dez quilômetros dali. Deve ser a usina sobre a qual o radio \n";
									cout << "estava falando. Voce sai da autoestrada e pega a esquerda, seguindo pela rodovia. Entao voce nota as pegadas no chao. Diversas pegadas de tamanhos diferentes, \n";
									cout << "marcadas em vermelho contra o asfalto. Vermelho igual sangue. Isso não pode ser um bom sinal. Aqueles infectados que te atacaram no trailer devem ter desviado \n";
									cout << "de algum grupo maior. As pegadas continuam conforme voce caminha adiante. Logo, ao lado direito da estrada voce vê um posto e um pequeno prédio, que devia ter \n";
									cout << "sido umhotel antes de tudo. Em frente ao posto esta estacionado um caminhão. Assim que voce chega mais perto, consegue distinguir movimento atrás do posto. \n";
									cout << "Voce está olhando naquela direçao com tanta atenção que não percebe a garrafa de vidro no chao. Quando voce percebe, ja chutou ela para longe. O barulho de \n";
									cout << "vidro em atrito com o asfalto eh alto. Ao olhar de novo para o posto, tem pelo menos uma duzia de infectados olhando para voce. \n";


									cout << "Escolha 1: correr para dentro do posto \n";
									cout << "Escolha 2: correr para dentro do caminhão \n";
									cout << "\n";

									cin >> escolha;

									if (escolha == 1) { // correr para dentro do posto
										cout << "Voce esta cansado e quase sem energia, mas suas pernas correm como nunca antes. Assim que voce começa a correr para o posto, os infectados começam \n";
										cout << "a vir em sua direção. Assim que chega na porta da conveniência do posto, voce a abre com força. Quando voce vau fechar a porta atras de si, porém, o \n";
										cout << "braço de um infectado fica no caminho. Rapidamente, voce pega sua faca e corta a carne, separando o braço do corpo. Assim que a porta fecha, um bando \n";
										cout << "de infectados se joga contra ela. Voce mantem a porta fechada com o seu corpo. No entanto, a porta nao vai aguentar por tanto tempo, nao com a força dos \n";
										cout << "infectados. Voce pega a corda da sua mochila e passa entre as maçanetas da porta, dando um no que vai precisar ser o bastante para manter a porta fechada \n";
										cout << "por alguns minutos. Assim que o no esta seguro, voce corre para tras do balcão do caixa e comeca a empurrar o movel. Eh extremamente pesado, mas voce \n";
										cout << "consegue empurra-lo para frente da porta, barrando os infectados com mais eficiencia. As maos deles tentam agarrar o vidro, deixando coberto de sangue o \n";
										cout << "material que deveria ser transparente. \n";
										cout << "\n";
										cout << "Escolha 1: procurar suprimentos \n";
										cout << "\n";

										cin >> escolha;

										if (escolha == 1) { // procurar suplementos
											cout << "Escolha 1 (procurar suprimentos): Antes de se preocupar em como voce vai sair dali, sua prioridade eh encontrar qualquer suprimento que pode lhe ser util. \n";
											cout << "E voce realmente acaba encontrando algumas coisas uteis. Na pia do banheiro ainda tem agua corrente, de aparencia limpa, entao voce aproveita para escovar os \n";
											cout << "dentes e encher suas garrafas de agua. Infelizmente, nao tinha nenhum tipo de comida disponivel. Alem disso, voce encontra produtos de limpeza, os quais te \n";
											cout << "ajudam a pensar num plano para escapar vivo. Tambem nao existem outras saidas. A porta dos fundos esta trancada. Entao, voce pega sua mochila, guardando tudo \n";
											cout << "o que encontrou de util na conveniencia, e encontra uma escada para a laje do posto. Estando la em cima, voce pega o alcool que encontrou e vai para a beira da \n";
											cout << "laje. Abaixo de voce, ainda na frente da porta, os infectados continuam tentando entrar. Sem perder tempo, voce joga todo o alcool que encontrou em cima deles \n";
											cout << "e entao acende o fosforo. Assim que o fogo começa, voce corre para o outro lado da laje. \n";
											cout << "\n";
											cout << "Escolha 1: pular\n";
											cout << "\n";

											cin >> escolha;

											if (escolha == 1) { // FINAL 1
												cout << "Final 1: Aproveitando sua chance de fugir, voce vai escondido ate as árvores na lateral da rodovia e caminha entre elas por quilômetros. Ate que os infectados \n";
												cout << "foram ha muito tempo deixados para tras. Voce alterna entre correr e caminhar pelo resto do caminho. Depois de muito tempo, por sorte sem encontrar mais nenhuma \n";
												cout << "dificuldade no trajeto, voce encontra uma placa indicando a direcao da usina hidroelétrica, seguindo pela rua a esquerda. Os grandes muros de concreto podem ser \n";
												cout << "visto de longe. O som da água caindo te acompanha na viagem. Finalmente, voce esta de frente para um grande portao de ferro. Entre as frestas voce consegue ver \n";
												cout << "um grande lago cercado de casas e pessoas. Um verdadeiro abrigo. Protegido dos perigos do lado de fora. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
												cout << "\n";
											}
										}
									}
								}
							}
							else { // floresta em busca de rio
								cout << "Escolha 2 (procurar um rio): Voce segue em linha reta para dentro da floresta. Sempre em frente com os ouvidos atentos na esperança de ouvir o som de água \n";
								cout << "corrente, mas também focando para detectar a presença de algum infectado antes que seja tarde demais. Nunca se sabe se aquele radio levaria para uma armadilha. \n";
								cout << "Enquanto anda, voce abre um alimento enlatado e devora a comida. Voce caminha e caminha e caminha, por muito tempo. Ate que enxerga um trecho em frente onde \n";
								cout << "nao ha arvores e pode-se ver o ceu. Voce corre para la, sabendo que ali no meio deve passar um rio. E voce estava certo, entretanto, nao esperava encontrar um \n";
								cout << "rio de aguas vermelhas, manchando a terra e as pedras ao redor. Rio este, também, que deve ter menos que a metade de seu tamanho original, considerando as \n";
								cout << "grandes margens secas ao seu redor. Voce nao entende como o rio pode ter sido contaminado desse jeito, mas sabe que nao lhe resta opçao: \n";
								cout << "\n";
								cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
								cout << "\n";

								cin >> escolha;

								cout << "Final 2: As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. \n";
								cout << "Tudo fica ainda pior quando nao somente o rio esta contaminado de sangue, mas tambem a terra onde voce pisa. Finalmente voce descobre de onde vem a contaminação. \n";
								cout << "Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em \n";
								cout << "seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no \n";
								cout << "caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em \n";
								cout << "decomposiçao. De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados \n";
								cout << "em uma das arvores. Quando voce olha para seus pes, eles estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e \n";
								cout << "logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, \n";
								cout << "em direçao a um grande portao de ferro. Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta sendo levado para um \n";
								cout << "abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
								cout << "\n";
							}
						}
					}
				}
			}

			// Escolha 2: Investigar a casa
			else if (escolha == 2) {
				cout << "Como já estava quase anoitecendo e você prefere não passar mais uma noite dentro de um carro, você muda sua trajetória e passa a seguir a estrada de terra. O sol já estava quase \n";
				cout << "se pondo quando você chega até a varanda da casa. De perto, você percebe que a madeira já é bastante velha, e que a maioria dos vidros das janelas estão quebrados. É bem improvável \n";
				cout << "que este seja o abrigo de alguém, considerando o quão pouco protegida é a casa. A porta, entretanto, estava trancada, então você pula uma das janelas. Tentando se mover o mais \n";
				cout << "silenciosamente possível, você pega a sua lanterna de dentro da mochila e caminha pelo ambiente. Você aprendeu do jeito duro quais são as prioridades assim que entra em um lugar novo: \n";
				cout << "encontrar tudo o que pode ser usado como arma; calcular qual seria a saída mais rápida; e procurar sinais que indiquem presença de infectados ou outras pessoas. Quanto a armas, você \n";
				cout << "só vê uma garrafa quebrada ao seu lado, em cima de uma mesa de madeira. Antes que você possa pensar em planos de fuga, ruídos de madeira rangendo vem da varanda em frente a casa. \n";
				cout << "Rapidamente, você considera suas opções de armas: \n";
				cout << "\n";

				cout << "Escolha 1: pegar a garrafa quebrada \n";
				cout << "Escolha 2 : pegar a faca que você guarda na lateral da mochila \n";
				cout << "Escolha 3 : pegar sua arma, porém você só tem uma bala \n";

				cin >> escolha;


				if (escolha == 1) { // garrafa quebrada
					cout << "Escolha 1 (garrafa quebrada): Voce pega a garrafa de cima da mesa e a segura em frente ao seu corpo, ao mesmo tempo usando a outra mão para apontar a lanterna na direçao da porta. \n";
					cout << "Voce escuta o que parecem ser sons de passos, mas pela velocidade com que se aproximam você ja descarta a pior das possibilidades: um infectado do tipo mais rápido, que eh atraído \n";
					cout << "pelo som, já que eles nao tem olhos. O som passa pela frente da porta e para proximo a janela por onde voce entrou. Sua lanterna ilumina o lado de fora atraves do vidro e, para \n";
					cout << "sua surpresa, na verdade, o que aparece diante de voce eh um cachorro. Ele simplesmente senta no chao e fica olhando em sua direçao. Seu pelo esta bem sujo e ele parece estar um \n";
					cout << "pouco magro. O comportamento dele ate então te faz pensar que este nao deve ser um cachorro selvagem, mas o que deixa isso obvio eh a coleira que ele usa. \n";
					cout << "\n";
					cout << "Escolha 1: deixar o cachorro entrar na casa \n";
					cout << "Escolha 2 : barrar a janela para que o cachorro não entre \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) {
						cout << "Escolha 1 (deixar o cachorro entrar): Voce chama o cachorro para dentro e, facilmente obedecendo o comando, ele pula a janela e se aloja no tapete em frente a lareira. Assim que ele entra, voce vira \n";
						cout << "a mesa de madeira contra a porta para que mais nada nem ninguém consiga entrar. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de lenha cortada. Infelizmente, nao \n";
						cout << "havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer.Assim que acende a lareira, voce acha um lugar confortavel o suficiente para deitar \n";
						cout << "e dormir. Na manhã seguinte, voce acorda com os latidos do cachorro.Ele esta agressivamente latindo na direção da porta, em posição de ataque. Os grunhidos vindos do lado de fora são do tipo que você \n";
						cout << "reconhece. Infectados, com certeza. Pelo menos três.Voce levanta com rapidez e pega o machado que havia encontrado. Olhando ao redor, só te restam duas opções: \n";

						cout << "Escolha 1 : fugir por uma janela de tras da casa \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Logo a terra tambem esta contaminada de sangue. Finalmente, voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens \n";
							cout << "do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um \n";
							cout << "grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. O cachorro vai ate a parede e começa a latir se parar. Voce fica desesperado, \n";
							cout << "torcendo para que nao tenha nenhum infectados vivo por perto que seja atraido pelo som dos latidos. No momento em que voce pretende ir ate o cachorro para acalma-lo, voce ve tres silhuetas de pessoas no \n";
							cout << "topo da parede da usina. Quando voce da um passo para tras para se esconder entre as arvores, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado \n";
							cout << "como os infectados em uma das arvores. O sangue começa a correr para o seu cerebro e logo voce apaga. A última coisa que voce escuta sao os latidos do cachorro. Seu fim nao vai ser como o de um infectado, \n";
							cout << "porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e \n";
							cout << "pessoas. Um abrigo. Voce esta sendo levado para um abrigo. O cachorro passa correndo pelo seu lado e esperar na frente do portao, seu rabo balançando de um lado para o outro. Pela primeira vez desde o começo \n";
							cout << "de tudo, voce tem esperança. \n";
						}
					}
					else if (escolha == 2) {
						cout << "Escolha 2 (não deixar o cachorro entrar): Voce ja teve diferentes companhias durante o último ano, desde que o virus se espalhou, e sabe que não conseguiria lidar com outra perda. Entao, voce e o cachorro \n";
						cout << "vao ter que seguir caminhos diferentes. Voce vira a mesa de lado e a coloca em frente a janela, barrando a entrada. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de \n";
						cout << "lenha cortada. Infelizmente, nao havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer. Alem disso, voce acha um mapa da regiao, o qual voce \n";
						cout << "guarda para olhar depois. Voce acende a lareira e se deita em frente a ela, logo caindo no sono.Na manha seguinte, sua garganta esta seca, implorando por um gole de agua. E isso eh tudo o que voce se \n";
						cout << "permite beber; alguns poucos goles. Duas das suas garrafas estao vazias, e a última esta pela metade.Urgentemente voce precisa encontrar agua. Ao analisar o mapa, um rio parece estar perto o suficiente \n";
						cout << "dali. Localizado atras do morro no qual a casa fica em frente.Voce caminha por muito tempo. Ate que enxerga um trecho em frente limpo de arvores. Voce corre para la, sabendo que ali no meio deve passar um \n";
						cout << "rio. E voce estava certo, entretanto, nao esperava encontrar um rio de aguas vermelhas, manchando a terra e as pedras ao redor.Rio este, também, que deve ter menos que a metade de seu tamanho original, \n";
						cout << "considerando as grandes margens secas ao seu redor. \n";

						cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. Tudo fica ainda pior quando nao somente o rio \n";
							cout << "esta contaminado de sangue, mas tambem a terra onde voce pisa.Finalmente voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de \n";
							cout << "infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina \n";
							cout << "hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em decomposiçao. \n";
							cout << "De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados em uma das arvores. Quando voce olha para seus pes, eles \n";
							cout << "estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, \n";
							cout << "voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta \n";
							cout << "sendo levado para um abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
						}
					}
				}
				else if (escolha == 2) {
					cout << "Escolha 2 (faca): Você pega faca e a segura em frente ao seu corpo, ao mesmo tempo usando a outra mão para apontar a lanterna na direçao da porta. Voce escuta o que parecem ser sons \n";
					cout << "de passos, mas pela velocidade com que se aproximam voce ja descarta a pior das possibilidades : um infectado do tipo mais rápido, que eh atraido pelo som, ja que eles não têm olhos. \n";
					cout << "O som passa pela frente da porta e para proximo a janela por onde voce entrou.Sua lanterna ilumina o lado de fora através do vidro e, para sua surpresa, na verdade, o que aparece \n";
					cout << "diante de voce eh um cachorro.Ele simplesmente senta no chao e fica olhando em sua direçao. Seu pelo esta bem sujo e ele parece estar um pouco magro. O comportamento dele ate entao \n";
					cout << "te faz pensar que este não deve ser um cachorro selvagem, mas o que deixa isso obvio eh a coleira que ele usa. \n";
					cout << "\n";
					cout << "Escolha 1: deixar o cachorro entrar na casa \n";
					cout << "Escolha 2 : barrar a janela para que o cachorro não entre \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) {
						cout << "Escolha 1 (deixar o cachorro entrar): Voce chama o cachorro para dentro e, facilmente obedecendo o comando, ele pula a janela e se aloja no tapete em frente a lareira. Assim que ele entra, voce vira \n";
						cout << "a mesa de madeira contra a porta para que mais nada nem ninguém consiga entrar. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de lenha cortada. Infelizmente, nao \n";
						cout << "havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer.Assim que acende a lareira, voce acha um lugar confortavel o suficiente para deitar \n";
						cout << "e dormir. Na manhã seguinte, voce acorda com os latidos do cachorro.Ele esta agressivamente latindo na direção da porta, em posição de ataque. Os grunhidos vindos do lado de fora são do tipo que você \n";
						cout << "reconhece. Infectados, com certeza. Pelo menos três.Voce levanta com rapidez e pega o machado que havia encontrado. Olhando ao redor, só te restam duas opções: \n";
						cout << "\n";
						cout << "Escolha 1: fugir por uma janela de tras da casa \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Logo a terra tambem esta contaminada de sangue. Finalmente, voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens \n";
							cout << "do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um \n";
							cout << "grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. O cachorro vai ate a parede e começa a latir se parar. Voce fica desesperado, \n";
							cout << "torcendo para que nao tenha nenhum infectados vivo por perto que seja atraido pelo som dos latidos. No momento em que voce pretende ir ate o cachorro para acalma-lo, voce ve tres silhuetas de pessoas no \n";
							cout << "topo da parede da usina. Quando voce da um passo para tras para se esconder entre as arvores, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado \n";
							cout << "como os infectados em uma das arvores. O sangue começa a correr para o seu cerebro e logo voce apaga. A última coisa que voce escuta sao os latidos do cachorro. Seu fim nao vai ser como o de um infectado, \n";
							cout << "porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e \n";
							cout << "pessoas. Um abrigo. Voce esta sendo levado para um abrigo. O cachorro passa correndo pelo seu lado e esperar na frente do portao, seu rabo balançando de um lado para o outro. Pela primeira vez desde o começo \n";
							cout << "de tudo, voce tem esperança. \n";
						}
					}
					else if (escolha == 2) {
						cout << "Escolha 2 (não deixar o cachorro entrar): Voce ja teve diferentes companhias durante o último ano, desde que o virus se espalhou, e sabe que não conseguiria lidar com outra perda. Entao, voce e o cachorro \n";
						cout << "vao ter que seguir caminhos diferentes. Voce vira a mesa de lado e a coloca em frente a janela, barrando a entrada. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de \n";
						cout << "lenha cortada. Infelizmente, nao havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer. Alem disso, voce acha um mapa da regiao, o qual voce \n";
						cout << "guarda para olhar depois. Voce acende a lareira e se deita em frente a ela, logo caindo no sono.Na manha seguinte, sua garganta esta seca, implorando por um gole de agua. E isso eh tudo o que voce se \n";
						cout << "permite beber; alguns poucos goles. Duas das suas garrafas estao vazias, e a última esta pela metade.Urgentemente voce precisa encontrar agua. Ao analisar o mapa, um rio parece estar perto o suficiente \n";
						cout << "dali. Localizado atras do morro no qual a casa fica em frente.Voce caminha por muito tempo. Ate que enxerga um trecho em frente limpo de arvores. Voce corre para la, sabendo que ali no meio deve passar um \n";
						cout << "rio. E voce estava certo, entretanto, nao esperava encontrar um rio de aguas vermelhas, manchando a terra e as pedras ao redor.Rio este, também, que deve ter menos que a metade de seu tamanho original, \n";
						cout << "considerando as grandes margens secas ao seu redor. \n";
						cout << "\n";
						cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. Tudo fica ainda pior quando nao somente o rio \n";
							cout << "esta contaminado de sangue, mas tambem a terra onde voce pisa.Finalmente voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de \n";
							cout << "infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina \n";
							cout << "hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em decomposiçao. \n";
							cout << "De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados em uma das arvores. Quando voce olha para seus pes, eles \n";
							cout << "estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, \n";
							cout << "voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta \n";
							cout << "sendo levado para um abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
						}
					}
					else {
						cout << "Escolha 2 (não deixar o cachorro entrar): Voce ja teve diferentes companhias durante o último ano, desde que o virus se espalhou, e sabe que não conseguiria lidar com outra perda. Entao, voce e o cachorro \n";
						cout << "vao ter que seguir caminhos diferentes. Voce vira a mesa de lado e a coloca em frente a janela, barrando a entrada. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de \n";
						cout << "lenha cortada. Infelizmente, nao havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer. Alem disso, voce acha um mapa da regiao, o qual voce \n";
						cout << "guarda para olhar depois. Voce acende a lareira e se deita em frente a ela, logo caindo no sono.Na manha seguinte, sua garganta esta seca, implorando por um gole de agua. E isso eh tudo o que voce se \n";
						cout << "permite beber; alguns poucos goles. Duas das suas garrafas estao vazias, e a última esta pela metade.Urgentemente voce precisa encontrar agua. Ao analisar o mapa, um rio parece estar perto o suficiente \n";
						cout << "dali. Localizado atras do morro no qual a casa fica em frente.Voce caminha por muito tempo. Ate que enxerga um trecho em frente limpo de arvores. Voce corre para la, sabendo que ali no meio deve passar um \n";
						cout << "rio. E voce estava certo, entretanto, nao esperava encontrar um rio de aguas vermelhas, manchando a terra e as pedras ao redor.Rio este, também, que deve ter menos que a metade de seu tamanho original, \n";
						cout << "considerando as grandes margens secas ao seu redor. \n";
						cout << "\n";
						cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. Tudo fica ainda pior quando nao somente o rio \n";
							cout << "esta contaminado de sangue, mas tambem a terra onde voce pisa.Finalmente voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de \n";
							cout << "infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes.Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina \n";
							cout << "hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em decomposiçao. \n";
							cout << "De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados em uma das arvores. Quando voce olha para seus pes, eles \n";
							cout << "estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, \n";
							cout << "voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta \n";
							cout << "sendo levado para um abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
						}
					}
				}
				else {
					cout << "Escolha 3 (arma com uma só bala) : Voce puxa a arma da sua calça e a segura em frente ao seu corpo, ao mesmo tempo usando a outra mão para apontar a lanterna na direçao da porta. \n";
					cout << "Voce escuta o que parecem ser sons de passos, mas pela velocidade com que se aproximam você ja descarta a pior das possibilidades: um infectado do tipo mais rapido, que eh atraido pelo \n";
					cout << "som, ja que eles nao tem olhos. O som passa pela frente da porta e para proximo a janela por onde voce entrou. Sua lanterna ilumina o lado de fora atraves do vidro e, para sua surpresa, \n";
					cout << "na verdade, o que aparece diante de voce eh um cachorro. Ele simplesmente senta no chao e fica olhando em sua direçao. Seu pelo esta bem sujo e ele parece estar um pouco magro. O \n";
					cout << "comportamento dele ate entao te faz pensar que este não deve ser um cachorro selvagem, mas o que deixa isso obvio eh a coleira que ele usa. \n";
					cout << "\n";
					cout << "Escolha 1: deixar o cachorro entrar na casa \n";
					cout << "Escolha 2 : barrar a janela para que o cachorro não entre \n";
					cout << "\n";

					cin >> escolha;

					if (escolha == 1) {
						cout << "Escolha 1 (deixar o cachorro entrar): Voce chama o cachorro para dentro e, facilmente obedecendo o comando, ele pula a janela e se aloja no tapete em frente a lareira. Assim que ele entra, voce vira \n";
						cout << "a mesa de madeira contra a porta para que mais nada nem ninguém consiga entrar. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de lenha cortada. Infelizmente, nao \n";
						cout << "havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer.Assim que acende a lareira, voce acha um lugar confortavel o suficiente para deitar \n";
						cout << "e dormir. Na manhã seguinte, voce acorda com os latidos do cachorro.Ele esta agressivamente latindo na direção da porta, em posição de ataque. Os grunhidos vindos do lado de fora são do tipo que você \n";
						cout << "reconhece. Infectados, com certeza. Pelo menos três.Voce levanta com rapidez e pega o machado que havia encontrado. Olhando ao redor, só te restam duas opções: \n";
						cout << "\n";
						cout << "Escolha 1 : fugir por uma janela de tras da casa \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Logo a terra tambem esta contaminada de sangue. Finalmente, voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens \n";
							cout << "do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um \n";
							cout << "grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. O cachorro vai ate a parede e começa a latir se parar. Voce fica desesperado, \n";
							cout << "torcendo para que nao tenha nenhum infectados vivo por perto que seja atraido pelo som dos latidos. No momento em que voce pretende ir ate o cachorro para acalma-lo, voce ve tres silhuetas de pessoas no \n";
							cout << "topo da parede da usina. Quando voce da um passo para tras para se esconder entre as arvores, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado \n";
							cout << "como os infectados em uma das arvores. O sangue começa a correr para o seu cerebro e logo voce apaga. A última coisa que voce escuta sao os latidos do cachorro. Seu fim nao vai ser como o de um infectado, \n";
							cout << "porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e \n";
							cout << "pessoas. Um abrigo. Voce esta sendo levado para um abrigo. O cachorro passa correndo pelo seu lado e esperar na frente do portao, seu rabo balançando de um lado para o outro. Pela primeira vez desde o começo \n";
							cout << "de tudo, voce tem esperança. \n";
						}
					}
					else {
						cout << "Escolha 2 (não deixar o cachorro entrar): Voce ja teve diferentes companhias durante o último ano, desde que o virus se espalhou, e sabe que não conseguiria lidar com outra perda. Entao, voce e o cachorro \n";
						cout << "vao ter que seguir caminhos diferentes. Voce vira a mesa de lado e a coloca em frente a janela, barrando a entrada. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de \n";
						cout << "lenha cortada. Infelizmente, nao havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer. Alem disso, voce acha um mapa da regiao, o qual voce \n";
						cout << "guarda para olhar depois. Voce acende a lareira e se deita em frente a ela, logo caindo no sono.Na manha seguinte, sua garganta esta seca, implorando por um gole de agua. E isso eh tudo o que voce se \n";
						cout << "permite beber; alguns poucos goles. Duas das suas garrafas estao vazias, e a última esta pela metade.Urgentemente voce precisa encontrar agua. Ao analisar o mapa, um rio parece estar perto o suficiente \n";
						cout << "dali. Localizado atras do morro no qual a casa fica em frente.Voce caminha por muito tempo. Ate que enxerga um trecho em frente limpo de arvores. Voce corre para la, sabendo que ali no meio deve passar um \n";
						cout << "rio. E voce estava certo, entretanto, nao esperava encontrar um rio de aguas vermelhas, manchando a terra e as pedras ao redor.Rio este, também, que deve ter menos que a metade de seu tamanho original, \n";
						cout << "considerando as grandes margens secas ao seu redor. \n";
						cout << "\n";
						cout << "Escolha 1: deixar o cachorro entrar na casa \n";
						cout << "Escolha 2 : barrar a janela para que o cachorro não entre \n";
						cout << "\n";

						cin >> escolha;

						if (escolha == 1) {
							cout << "Escolha 1 (deixar o cachorro entrar): Voce chama o cachorro para dentro e, facilmente obedecendo o comando, ele pula a janela e se aloja no tapete em frente a lareira. Assim que ele entra, voce vira \n";
							cout << "a mesa de madeira contra a porta para que mais nada nem ninguém consiga entrar. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de lenha cortada. Infelizmente, nao \n";
							cout << "havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer.Assim que acende a lareira, voce acha um lugar confortavel o suficiente para deitar \n";
							cout << "e dormir. Na manhã seguinte, voce acorda com os latidos do cachorro.Ele esta agressivamente latindo na direção da porta, em posição de ataque. Os grunhidos vindos do lado de fora são do tipo que você \n";
							cout << "reconhece. Infectados, com certeza. Pelo menos três.Voce levanta com rapidez e pega o machado que havia encontrado. Olhando ao redor, só te restam duas opções: \n";
							cout << "\n";
							cout << "Escolha 1 : fugir por uma janela de tras da casa \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) {
								cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Logo a terra tambem esta contaminada de sangue. Finalmente, voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens \n";
								cout << "do rio estao corpos. Diversos corpos de infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um \n";
								cout << "grande tubo. Deve ser uma antiga usina hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. O cachorro vai ate a parede e começa a latir se parar. Voce fica desesperado, \n";
								cout << "torcendo para que nao tenha nenhum infectados vivo por perto que seja atraido pelo som dos latidos. No momento em que voce pretende ir ate o cachorro para acalma-lo, voce ve tres silhuetas de pessoas no \n";
								cout << "topo da parede da usina. Quando voce da um passo para tras para se esconder entre as arvores, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado \n";
								cout << "como os infectados em uma das arvores. O sangue começa a correr para o seu cerebro e logo voce apaga. A última coisa que voce escuta sao os latidos do cachorro. Seu fim nao vai ser como o de um infectado, \n";
								cout << "porém. Quando voce acorda novamente, voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e \n";
								cout << "pessoas. Um abrigo. Voce esta sendo levado para um abrigo. O cachorro passa correndo pelo seu lado e esperar na frente do portao, seu rabo balançando de um lado para o outro. Pela primeira vez desde o começo \n";
								cout << "de tudo, voce tem esperança. \n";
							}
						}
						else if (escolha == 2) {
							cout << "Escolha 2 (não deixar o cachorro entrar): Voce ja teve diferentes companhias durante o último ano, desde que o virus se espalhou, e sabe que não conseguiria lidar com outra perda. Entao, voce e o cachorro \n";
							cout << "vao ter que seguir caminhos diferentes. Voce vira a mesa de lado e a coloca em frente a janela, barrando a entrada. Enquanto procura suprimentos na casa, voce encontra um machado e uma pequena pilha de \n";
							cout << "lenha cortada. Infelizmente, nao havia nenhuma comida na casa. Seu estômago ronca mas voce sabe que vai ter que aguentar ate a manha para poder comer. Alem disso, voce acha um mapa da regiao, o qual voce \n";
							cout << "guarda para olhar depois. Voce acende a lareira e se deita em frente a ela, logo caindo no sono.Na manha seguinte, sua garganta esta seca, implorando por um gole de agua. E isso eh tudo o que voce se \n";
							cout << "permite beber; alguns poucos goles. Duas das suas garrafas estao vazias, e a última esta pela metade.Urgentemente voce precisa encontrar agua. Ao analisar o mapa, um rio parece estar perto o suficiente \n";
							cout << "dali. Localizado atras do morro no qual a casa fica em frente.Voce caminha por muito tempo. Ate que enxerga um trecho em frente limpo de arvores. Voce corre para la, sabendo que ali no meio deve passar um \n";
							cout << "rio. E voce estava certo, entretanto, nao esperava encontrar um rio de aguas vermelhas, manchando a terra e as pedras ao redor.Rio este, também, que deve ter menos que a metade de seu tamanho original, \n";
							cout << "considerando as grandes margens secas ao seu redor. \n";
							cout << "\n";
							cout << "Escolha 1: caminhar contra a correnteza do rio ate sua origem \n";
							cout << "\n";

							cin >> escolha;

							if (escolha == 1) {
								cout << "As aguas continuam vermelhas conforme voce acompanha o rio. Quanto mais voce anda, mais perde a esperança de que ira encontrar uma parte limpa do rio. Tudo fica ainda pior quando nao somente o rio \n";
								cout << "esta contaminado de sangue, mas tambem a terra onde voce pisa.Finalmente voce descobre de onde vem a contaminação. Pendurados nas arvores ao redor das margens do rio estao corpos. Diversos corpos de \n";
								cout << "infectados, presos nas arvores de cabeça para baixo, com cordas amarradas em seus pes. Adiante, esta uma enorme parede de concreto por onde agua limpa sai de um grande tubo. Deve ser uma antiga usina \n";
								cout << "hidroelétrica. Assim que ela cai no caminho do rio, se junta com o sangue derramado. Voce caminha entre as arvores, ficando com uma forte sensaçao de tontura devido ao cheiro dos corpos em decomposiçao. \n";
								cout << "De repente, voce pisa no lugar errado e seu corpo eh puxado para cima. Agora voce ve o mundo de cabeça para baixo, pendurado como os infectados em uma das arvores. Quando voce olha para seus pes, eles \n";
								cout << "estao presos por cordas em um galho grosso da arvore. O sangue começa a correr para o seu cerebro e logo voce apaga. Seu fim nao vai ser como o de um infectado, porém. Quando voce acorda novamente, \n";
								cout << "voce esta sendo carregado em uma maca por uma rua asfaltada, em direçao a um grande portao de ferro.Entre as frestas voce consegue ver um grande lago cercado de casas e pessoas. Um abrigo. Voce esta \n";
								cout << "sendo levado para um abrigo. Pela primeira vez desde o começo de tudo, voce tem esperança. \n";
							}
						}
					}
				}
			}

			return 0;
		}
	}
}

