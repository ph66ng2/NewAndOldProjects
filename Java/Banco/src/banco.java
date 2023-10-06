import java.util.Scanner;

public class banco {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        String nome = "Paulo Henrique";
        double saldo = 2000.00;
        int escolha = 0;

        String infoString;
        infoString = """

                Olá, %s

                Seu saldo é de: %.2f



                1 - Ver Saldo
                2 - Trasferencia Pix
                3 - Recebimento Pix
                4 - Sair
                """.formatted(nome, saldo);

        System.out.println(infoString);

        String infoString2;
        infoString2 = """
                1 - Ver Saldo
                2 - Trasferencia Pix
                3 - Recebimento Pix
                4 - Sair
                """;

        while (escolha != 4) {
            System.out.println("Digite a operação desejada");

            escolha = leitor.nextInt();

            if (escolha == 1) {
                System.out.println("Seu Saldo atual é de: R$" + saldo);
                System.out.println(infoString2);

            }

            if (escolha == 2) {
                double trasferencia;
                System.out.println("R$" + saldo);
                System.out.println("Valor da Trasferência:");
                trasferencia = leitor.nextDouble();
                if (trasferencia > saldo) {
                    System.out.println("Não é possivel realizar essa trasnferência");
                } else {
                    saldo -= trasferencia;
                    System.out.println("Saldo Restante: R$" + saldo);

                }

            }

            if (escolha == 3) {
                double recebimento;
                System.out.println("R$" + saldo);
                System.out.println("Valor da Trasferência:");
                recebimento = leitor.nextDouble();

               saldo += recebimento;
               System.out.println("Novo Saldo: R$" + saldo);

            }

            if (escolha == 4) {
                System.out.println("Progama Encerrado");
                break;

            }

        }

    }

}
