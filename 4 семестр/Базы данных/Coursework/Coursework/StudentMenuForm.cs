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
    public partial class StudentMenuForm : Form
    {
        public StudentMenuForm()
        {
            InitializeComponent();
        }

        public StudentMenuForm(String studentName)
        {
            InitializeComponent();
            this.greetingLabel.Text = "Привет, " + studentName;
        }

        private void StudentMenuForm_Load(object sender, EventArgs e)
        {
            // Дарт Вейдер тут был сражен сэром Скайуокером
        }

        private void exitButton_Click(object sender, EventArgs e)
        {
            LoginForm.GetLoginForm().Show();
            this.Close();
        }

        private void StudentMenuForm_FormClosed(object sender, FormClosedEventArgs e)
        {
            LoginForm.GetLoginForm().Show();
        }

        private void progressButton_Click(object sender, EventArgs e)
        {
            StudentProgressForm progressForm = new StudentProgressForm(backForm: this);
            this.Hide();
            progressForm.Show();
        }
    }
}
