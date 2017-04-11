using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Coursework
{
    public partial class LoginForm : Form
    {
        public static LoginForm loginForm = new LoginForm();

        public static LoginForm GetLoginForm()
        {
            if (loginForm == null)
                loginForm = new LoginForm();
            return loginForm;
        }

        public LoginForm()
        {
            InitializeComponent();
        }

        private void LoginForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'mainDataSet.User' table. You can move, or remove it, as needed.
            this.userTableAdapter.Fill(this.mainDataSet.User);
        }

        private void loginButton_Click(object sender, EventArgs e)
        {
            this.loginUser(this.nameBox.Text, this.passwordBox.Text);
        }

        private void loginUser(String name, String password)
        {
            var query = from user in this.mainDataSet.User
                        where user.Имя == name
                        select user;

            foreach (var u in query)
            {
                if (u.Пароль == password)
                {
                    if (u.Тип == "студент")
                    {
                        StudentMenuForm menuForm = new StudentMenuForm(u.Имя);
                        menuForm.Show();
                    }
                    else if (u.Тип == "преподаватель")
                    {
                        // Открытие меню для преподавателя
                    }                        
                    this.Hide();
                }
            }
        }
    }
}
