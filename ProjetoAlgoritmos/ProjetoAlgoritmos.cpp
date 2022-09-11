#include <iostream>
using namespace std;

int main()
{
	int escolha;

	cout << "Bem vindo ao [nome do jogo]!\n";
	cout << "[nome do jogo] eh um jogo de escolhas, baseado na historia de um apocalipse.\n";
	cout << "O final da sua historia vai depender das escolhas que voce ira fazer. Quando chegar o momento de realizar uma escolha, digite o numero que deseja.\n";
	cout << "Ex: 1 para a primeira escolha, 2 para a segunda escolha e 3 para a terceira escolha. Algumas escolhas terao opcao unica. \n";
	cout << "Bom jogo!\n";
	cout << "\n";
	cout << "Ha pouco mais de um ano, o mundo virou de cabeca pra baixo, e os mortos começaram andar entre os vivos.\n"
		"Nao demorou muito para voce perceber que a cidade se tornou o pior lugar para ficar, a concentracao de pessoas foi um alvo facil e logo hordas de infectados haviam tomado conta das ruas.\n"
		"No inicio de tudo, ficar abrigado em sua casa parecia a melhor opcao, ate que a comida ficou escassa e o som dos infectados cercando o lugar dia e noite ficou impossivel de aguentar.\n"
		"Assim que conseguiu, voce juntou o necessario, entrou no seu carro e dirigiu sem rumo, tentando fugir do pesadelo que te cercou inesperadamente.\n"
		"Agora, voce esta caminhando pela autoestrada. Nenhuma pessoa a vista, somente carros abandonados e arvores por todo lado.\n"
		"Fazem dois dias desde que um infectado cruzou seu caminho, mas voce sabe que sua sorte nao vai durar por muito mais tempo.\n"
		"Afinal, eles estao por todo lado. Alguns metros a frente, uma abertura entre as arvores chama a sua atencao.\n"
		"Chegando mais perto, voce consegue ver uma estreita, porem razoavelmente longa, estrada de chao que leva a uma pequena casa no pico de um morro.\n"
		"Olhando adiante para a autoestrada, voce percebe que estava quase chegando a uma interseccao, mas desconhece para onde cada caminho o levaria.\n"
		"A partir desse ponto, existem duas opcoes : \n";
	cout << "\n";

	cout << "Escolha 1: Continuar na autoestrada\n";
	cout << "Escolha 2: Investigar a casa\n";

	cin >> escolha;
	if (escolha == 1) {
		cout << "Escolha 1: Para sua sorte, uma das janelas do trailer havia sido deixada meio aberta.\n";
		cout << "Ao entrar, sua mochila eh colocada de lado para que voce possa explorar o pequeno espaco. ";
		"Dois alimentos enlatados, algumas roupas e uma garrafa de agua sao tudo de valor que pode ser encontrado.\n";
		"Alem das potenciais armas, eh claro. Voce encontra uma faca de caca bem afiada, que pode substituir a faca velha ";
		"e usada que voce tinha, e algumas ferramentas, dentre elas uma chave inglesa grande.\n";
		cout << "A pequena cama dentro do trailer eh o lugar mais confortavel em que voce deitou desde muito tempo, e logo voce entra em um sono pesado.\n";
		cout << "Sono tao pesado este, que voce so acorda quando o dia ja esta claro, escutando os grunhidos que acompanham o som de unhas raspando pelo metal do trailer. Infectados. \n";
		cout << "Haviam cinco deles cercando seu trailer. Seu coracao comeca a bater mais rapido. Pior do que o som perturbador eh o cheiro deles.";
		"A podridao da carne morta te da ansia de vomito e dispara todos os sinais de alerta no seu cerebro.\n";
		cout << "Imediatamente adrenalina comeca a correr pelo seu sangue e voce procura a arma mais proxima.\n";
		cout << "Escolha 1: pegar a faca de caca\n";
		cout << "Escolha 2: pegar chave inglesa\n";
	}
	else if (escolha == 2) {
		cout << "Escolha 2: Uma pequena escada atras do trailer facilita a sua subida ate o teto do automovel e, para sua sorte, \n"
			"a claraboia ali localizada havia sido deixada entreaberta, facilitando sua entrada no trailer.";
		cout << "Ao entrar, sua mochila eh colocada de lado para que voce possa explorar o pequeno espaco. Dois alimentos enlatados, algumas roupas e uma garrafa de agua sao \n"
			"tudo de valor que pode ser encontrado. Alem das potenciais armas, eh claro.\n";
		cout << "Voce encontra uma faca de caca bem afiada, que pode substituir a faca velha e usada que voce tinha, e algumas ferramentas, dentre elas uma chave inglesa grande. \n"
			"A pequena cama dentro do trailer e o lugar mais confortavel em que voce deitou desde muito tempo, e logo voce entra em um sono pesado.\n";
		cout << "Sono tao pesado este, que voce so acorda quando o dia ja esta claro, escutando os grunhidos que acompanham o som de unhas raspando pelo metal do trailer. \n"
			"Infectados. Haviam cinco deles cercando seu trailer. Seu coracao comeca a bater mais rapido. Pior do que o som perturbador eh o cheiro deles. \n";
		cout << "A podridao da carne morta te da ansia de vomito e dispara todos os sinais de alerta no seu cerebro. \n"
			"Imediatamente adrenalina comeca a correr pelo seu sangue e voce procura a arma mais proxima.\n";
		cout << "Escolha 1: pegar a faca de caca\n";
		cout << "Escolha 2: pegar chave inglesa\n";
	}
	else {
		cout << "Escolha invalida, tente novamente.\n";
		cin >> escolha;
	}

	cin >> escolha;

	if (escolha == 1) {
		cout << "Escolha 1: Em um movimento a faca de caca esta na sua mao. \n";
		cout << "Voce olha pelas janelas do trailer, do lado esquerdo estao dois infectados, sendo um deles do pior tipo: \n";
		cout << "com uma audicao super agucada, ja que nao tem mais a capacidade de enxergar, e capaz de correr tao rapido quanto uma pessoa. \n";
		cout << "Do outro lado do trailer, haviam tres infectados, entre eles outro dos rapidos. Voce se pergunta o que atraiu eles ate ali. \n";
		cout << "Sua resposta logo chega a sua percepcao, quando voce nota o pequeno penduricalho de metal colocado no retrovisor, \n";
		cout << "que balancava com o vento entrando pela claraboia e emitia sons agudos. Como eh muito arriscado sair do trailer para enfrentar os infectados, \n";
		cout << "voce precisa conseguir ataca-los sem que eles consigam te alcancar. \n";
		cout << "Escolha 1: comecar pelo lado direito\n";
		cout << "Escolha 2: comecar pelo lado esquerdo\n";
	}
	else if (escolha == 2) {
		cout << "Escolha 2: Em um movimento a chave inglesa esta na sua mao. \n";
		cout << "Voce olha pelas janelas do trailer, do lado esquerdo estao dois infectados, sendo um deles do pior tipo: \n";
		cout << "com uma audicao super agucada, ja que nao tem mais a capacidade de enxergar, e capaz de correr tao rapido quanto uma pessoa. \n";
		cout << "Do outro lado do trailer, haviam tres infectados, entre eles outro dos rapidos. Voce se pergunta o que atraiu eles ate ali. \n";
		cout << "Sua resposta logo chega a sua percepcao, quando voce nota o pequeno penduricalho de metal colocado no retrovisor, que balancava \n";
		cout << "com o vento entrando pela claraboia e emitia sons agudos. Como eh muito arriscado sair do trailer para enfrentar os infectados, \n";
		cout << "voce precisa conseguir ataca-los sem que eles consigam te alcancar. Para isso, somente a chave inglesa nao vai bastar. \n";
		cout << "Voce pega tambem a corda de dentro da sua mochila e sobe pela claraboia para o teto do trailer. \n";
		cout << "Escolha 1: comecar pelo lado direito\n";
		cout << "Escolha 2: comecar pelo lado esquerdo\n";
	}
	else {
		cout << "Escolha invalida, tente novamente.\n";
		cin >> escolha;
	}
	cout << "\n";
	cin >> escolha;

	if (escolha == 1) {
		cout << "Escolha 1: O melhor jeito de atacar os infectados sem sair do trailer eh usando as janelas ao seu favor. \n";
		cout << "Voce segura a faca em uma mao e pega a corda que voce mantem dentro da mochila. \n";
		cout << "Comecando pelo lado com mais infectados, voce abre a janela mais proxima do infectado do tipo mais perigoso e, \n";
		cout << "assim como havia previsto, logo as garras dele tentam te alcancar. \n";
		cout << "Voce usa a corda para prender os bracos dele juntos e os empurra contra a lateral da janela, o que te da espaco para  \n";
		cout << "se aproximar e mirar sua faca na direcao do cerebro do infectado, dando um golpe unico e certeiro. \n";
		cout << "Logo em seguida, os outros dois tentam te alcancar e uma deles consegue rasgar a manga da sua camisa. \n";
		cout << "Por sorte, sua pele fica intacta e logo voce tem uma faca cheia de sangue e tres corpos no chao. \n";
		cout << "Com o outro lado do trailer voce tem menos dificuldades. O som agoniante dos infectados finalmente cessou, \n";
		cout << "deixando somente o som do bater do penduricalho. O ar, no entanto, continuou contaminado pelo odor putrido";
	}
	else if (escolha == 2) {
		cout << "Escolha 2: O melhor jeito de atacar os infectados sem sair do trailer eh usando as janelas ao seu favor. \n";
		cout << "Voce segura a faca em uma mao e pega a corda que voce mantem dentro da mochila. \m";
		cout << "Comecando pelo lado com menos infectados, você abre a janela mais proxima do infectado do tipo mais perigoso e, \n";
		cout << "assim como havia previsto, logo as garras dele tentam te alcancar.";
		cout << "Voce usa a corda para prender os bracos dele juntos e os empurra contra a lateral da janela, o que te da espaco para \n";
		cout << "se aproximar e mirar sua faca na direcao do cerebro do infectado, dando um golpe unico e certeiro. \n";
		cout << "Logo o proximo infectado esta no chao tambem e voce segue para o lado esquerdo do trailer para fazer a mesma coisa. \n";
		cout << "Deste lado, porem, assim que voce abre a janela, dois deles tentam te alcanxar e uma deles consegue rasgar a manga da sua camisa. \n";
		cout << "Por sorte, sua pele fica intacta e logo voce tem uma faca cheia de sangue e mais tres corpos no chao. \n";
		cout << "O som agoniante dos infectados finalmente cessou, deixando somente o som do bater do penduricalho. \n";
		cout << "O ar, no entanto, continuou contaminado pelo odor putrido. \n"; 
	}
	else {
		cout << "Escolha invalida, tente novamente.\n";
		cin >> escolha;
	}

	return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
