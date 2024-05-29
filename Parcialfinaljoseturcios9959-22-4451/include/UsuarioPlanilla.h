using namespace std;

class UsuarioPlanilla
{

	public:
		void iniciarSesion();
		string menuUsuario(string nombreUsuario);
		void registroUsuario();
		void imprimirUsuario(string nombreUsuario);
		void borrarUsuario(string nombreUsuario);
		void modificarUsuario(string nombreUsuario);
		void buscarUsuario(string nombreUsuario);
		void dibujarPortada(string nombreArchivo);

		private:
		string nombre, contrasena;
};

#endif // USUARIOPLANILLA_H
